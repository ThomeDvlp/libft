#include <stdio.h>

int ft_isalpha(int c);
int ft_isdigit(int c);

int main(void)
{
    int num = '2';
    int alpha = 'a';
    printf("alpha = %d\n", ft_isalpha(alpha));
    printf("num = %d\n\n", ft_isalpha(num));
	printf("ft_isdigit(num) = %d\n", ft_isdigit(num));
	printf("ft_isdigit(alpha) = %d\n\n", ft_isdigit(alpha));
}

