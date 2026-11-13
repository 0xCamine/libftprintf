
#include <limits.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

int	ft_printf(const char *format, ...);

int	main(void)
{
	int ret1;
	int ret2;
    close(1);
	ret1 = printf("%s ", "qqqq" );
	fprintf(stderr,"\nPRINTF RETURN    : %d\n\n", ret1);
 
	 
	ret2 = ft_printf("%s ", "qqqq" );
	fprintf(stderr,"\nFT_PRINTF RETURN : %d\n\n", ret2);
 

	return (0);
}