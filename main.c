
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
 
	ret1 = printf("%p  %p", &ret1 , NULL );
	printf("\nPRINTF RETURN    : %d\n\n", ret1);
 
	ret2 = ft_printf("%p", &ret1);
	printf("\nFT_PRINTF RETURN : %d\n\n", ret2);
 

	return (0);
}