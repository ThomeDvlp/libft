#include "libft.h"
#include <stdio.h>

int	main(void)
{
	int x;
	int *p;
	int A[] = {2,4,5,8,1};
	int B[3][2];

	B[0][0] = 9;

	x = 7;
	p = &x;
	p = A;
	printf("valor declarando p = %d\n", *(p + 1));
	printf("declarando *A = %d\n", *(A + 3));
	printf("declarando &A = %p\n", (A));
	printf("declarando &A[0] = %p\n", &A[0]); 
	printf("declarando A[0] = %d\n", A[0]);
	printf("declarando valor B = %d\n", B[0][0]);
}
