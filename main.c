#include <stdarg.h>
#include <stdio.h>

// Variadic function to print given arguments
void	print(int n, ...)
{
	va_list	args;

	va_start(args, n);
 
	printf("%d\n"  ,    args->gp_offset );
	printf("%d\n"  ,   args->fp_offset) ;
	printf("%p\n"  ,   (args->overflow_arg_area));
	printf("%p\n"  ,   (args->reg_save_area));

 
	void *base_address = args->reg_save_area;

	for(unsigned int  offset  = args->gp_offset;  offset <= 24 ; offset = offset + 8)
		printf("%d " , *(int * )((base_address) + (offset) )   );
 
	// for (int i = 0; i < n; i++)
	// 	printf("%d ", va_arg(args, int));
	
	printf("\n");
	va_end(args);
}
int	main(void)
{
	// Calling function print() with different number
	// of arguments
	print(3, 1, 2, 4);

	return (0);
}