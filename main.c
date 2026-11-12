#include "ft_printf.h"
 #include <stdio.h>
#include <limits.h> 



#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include <limits.h>

int ft_printf(const char *format, ...);

#define BUFFER_SIZE 8192

typedef struct s_capture
{
    int ret;
    size_t len;
    unsigned char data[BUFFER_SIZE];
    int truncated;
}   t_capture;

FILE *start_capture(int *saved_stdout)
{
    FILE *tmp;

    fflush(stdout);
    tmp = tmpfile();
    if (!tmp)
    {
        perror("tmpfile");
        exit(1);
    }
    *saved_stdout = dup(STDOUT_FILENO);
    if (*saved_stdout == -1 || dup2(fileno(tmp), STDOUT_FILENO) == -1)
    {
        perror("dup / dup2");
        exit(1);
    }
    return (tmp);
}

void end_capture(FILE *tmp, int saved_stdout, t_capture *result)
{
    long size;

    fflush(stdout);
    if (dup2(saved_stdout, STDOUT_FILENO) == -1)
    {
        perror("dup2 restore");
        exit(1);
    }
    close(saved_stdout);

    fseek(tmp, 0, SEEK_END);
    size = ftell(tmp);
    rewind(tmp);

    if (size < 0)
        size = 0;

    result->len = (size_t)size;
    result->truncated = (result->len > BUFFER_SIZE);
    if (result->len > BUFFER_SIZE)
        result->len = BUFFER_SIZE;

    result->len = fread(result->data, 1, result->len, tmp);
    fclose(tmp);
}

void print_output(const unsigned char *data, size_t len)
{
    size_t i;

    printf("\"");
    i = 0;
    while (i < len)
    {
        if (data[i] == '\n')
            printf("\\n");
        else if (data[i] == '\t')
            printf("\\t");
        else if (data[i] == '\r')
            printf("\\r");
        else if (data[i] == '\0')
            printf("\\0");
        else if (data[i] == '\\')
            printf("\\\\");
        else if (data[i] == '"')
            printf("\\\"");
        else if (data[i] >= 32 && data[i] <= 126)
            printf("%c", data[i]);
        else
            printf("\\x%02x", data[i]);
        i++;
    }
    printf("\"");
}

int run_test_count = 0;
int passed_count = 0;
int failed_count = 0;

#define TEST(name, format, ...) do { \
    t_capture original = {0}; \
    t_capture mine = {0}; \
    FILE *tmp; \
    int saved; \
    int output_ok; \
    int return_ok; \
    run_test_count++; \
    printf("\n========================================\n"); \
    printf("TEST %d: %s\n", run_test_count, name); \
    printf("FORMAT: "); \
    print_output((const unsigned char *)format, strlen(format)); \
    printf("\n"); \
    tmp = start_capture(&saved); \
    original.ret = printf(format, ##__VA_ARGS__); \
    end_capture(tmp, saved, &original); \
    tmp = start_capture(&saved); \
    mine.ret = ft_printf(format, ##__VA_ARGS__); \
    end_capture(tmp, saved, &mine); \
    output_ok = (original.len == mine.len && \
        memcmp(original.data, mine.data, original.len) == 0 && \
        original.truncated == mine.truncated); \
    return_ok = (original.ret == mine.ret); \
    printf("PRINTF OUTPUT    : "); \
    print_output(original.data, original.len); \
    printf("\n"); \
    printf("FT_PRINTF OUTPUT : "); \
    print_output(mine.data, mine.len); \
    printf("\n"); \
    printf("PRINTF RETURN    : %d\n", original.ret); \
    printf("FT_PRINTF RETURN : %d\n", mine.ret); \
    printf("OUTPUT CHECK     : %s\n", output_ok ? "PASS" : "FAIL"); \
    printf("RETURN CHECK     : %s\n", return_ok ? "PASS" : "FAIL"); \
    if (output_ok && return_ok) { \
        printf("RESULT           : PASS\n"); \
        passed_count++; \
    } else { \
        printf("RESULT           : FAIL\n"); \
        failed_count++; \
    } \
} while (0)

int main(void)
{
    int n = 42;
    int negative = -42;
    char *str = "42 School";

    printf("\n");
    printf("########################################\n");
    printf("#          FT_PRINTF TESTER            #\n");
    printf("########################################\n");

    // CHARACTERS
    TEST("Character A", "%c", 'A');
    TEST("Character Z", "%c", 'Z');
    TEST("Character zero", "%c", 0);
    TEST("Character space", "%c", ' ');

    // STRINGS
    TEST("Normal string", "%s", "Hello World");
    TEST("Empty string", "%s", "");
    TEST("One character string", "%s", "A");
    TEST("Long string", "%s",
        "This is a long string for testing ft_printf!");

    // POINTERS
    TEST("Normal pointer", "%p", (void *)&n);
    TEST("Another pointer", "%p", (void *)&negative);

    // DECIMAL
    TEST("Decimal zero", "%d", 0);
    TEST("Decimal positive", "%d", 42);
    TEST("Decimal negative", "%d", -42);
    TEST("INT_MAX", "%d", INT_MAX);
    TEST("INT_MIN", "%d", INT_MIN);

    // INTEGER
    TEST("Integer zero", "%i", 0);
    TEST("Integer positive", "%i", 1337);
    TEST("Integer negative", "%i", -1337);
    TEST("Integer INT_MAX", "%i", INT_MAX);
    TEST("Integer INT_MIN", "%i", INT_MIN);

    // UNSIGNED
    TEST("Unsigned zero", "%u", 0u);
    TEST("Unsigned positive", "%u", 42u);
    TEST("Unsigned UINT_MAX", "%u", UINT_MAX);

    // HEX LOWERCASE
    TEST("Hex zero", "%x", 0u);
    TEST("Hex 10", "%x", 10u);
    TEST("Hex 255", "%x", 255u);
    TEST("Hex 1337", "%x", 1337u);
    TEST("Hex UINT_MAX", "%x", UINT_MAX);

    // HEX UPPERCASE
    TEST("HEX zero", "%X", 0u);
    TEST("HEX 10", "%X", 10u);
    TEST("HEX 255", "%X", 255u);
    TEST("HEX 1337", "%X", 1337u);
    TEST("HEX UINT_MAX", "%X", UINT_MAX);

    // PERCENT
    TEST("Percent", "%%");

    // MIXED
    TEST("All conversions",
        "%c %s %p %d %i %u %x %X %%",
        'A', str, (void *)&n, -42, 42, 42u, 255u, 255u);

    TEST("Mixed numbers",
        "%d %d %d %d", 0, 1, -1, INT_MIN);

    TEST("Mixed hexadecimal",
        "%x %X %x %X", 10u, 10u, UINT_MAX, UINT_MAX);

    TEST("Text and conversions",
        "Hello %s, number = %d, hex = %x!",
        "World", 1337, 1337u);

    TEST("Consecutive conversions",
        "%d%d%d%d", 1, 2, 3, 4);

    TEST("Consecutive hex",
        "%x%x%x", 10u, 11u, 12u);

    TEST("Percent between conversions",
        "%d%%%d", 42, 1337);

    TEST("Text without conversion", "Hello World!");
    TEST("Empty format", "");

    // FINAL SUMMARY
    printf("\n\n");
    printf("########################################\n");
    printf("#             FINAL SUMMARY            #\n");
    printf("########################################\n");
    printf("TOTAL TESTS : %d\n", run_test_count);
    printf("PASSED      : %d\n", passed_count);
    printf("FAILED      : %d\n", failed_count);
    printf("----------------------------------------\n");

    if (failed_count == 0)
        printf("ALL TESTS PASSED!\n");
    else
        printf("SOME TESTS FAILED!\n");

    printf("########################################\n");

    return (failed_count != 0);
}
