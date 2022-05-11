#include <stdio.h>

int ft_isalpha(int c);
int ft_isdigit(int c);
int ft_isalnum(int c);

int main(void)
{
    int num = '2';
    int alpha = 'a';

	printf("num = 2 \nalpha = a\n\n");
    printf("ft_isalpha(alpha) = %d\n", ft_isalpha(alpha));
    printf("ft_isalpha(num) = %d\n\n", ft_isalpha(num));
	printf("ft_isdigit(num) = %d\n", ft_isdigit(num));
	printf("ft_isdigit(alpha) = %d\n\n", ft_isdigit(alpha));
	printf("ft_isalnum(num) = %d\n", ft_isalnum(num));
	printf("ft_isalnum(alpha) = %d\n\n", ft_isalnum(alpha));
	
}

