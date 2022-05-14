#include <stdio.h>

int ft_isalpha(int c);
int ft_isdigit(int c);
int ft_isalnum(int c);
int ft_isascii(int c);
int ft_isprint(int c);
int ft_strlen(const char *s);
void *ft_memset(void *s, int c, int m);

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
	printf("ft_isascii(alph) = %d\n", ft_isascii(alpha));
	printf("ft_isascii(num) = %d\n", ft_isascii(num));

	int nptr = 1;
	int sbl = '!'; 
	int outascii = 128;
	printf("ft_isascii(notPrintable) = %d\n", ft_isascii(nptr));
	printf("ft_isascii(simbol) = %d\n", ft_isascii(sbl));	
	printf("ft_isascii(outAscii) = %d\n\n", ft_isascii(outascii));

	printf("ft_isprint(notPrintable) = %d\n", ft_isprint(nptr));
	printf("ft_isprint(simbol) = %d\n", ft_isprint(sbl));
	printf("ft_isprint(num) = %d\n", ft_isprint(num));
	printf("ft_isprint(alpha) = %d\n", ft_isprint(alpha));
	printf("ft_isprint(aoutAscii) = %d\n\n", ft_isprint(outascii));

	printf("ft_strlen(0123456789) = %d\n\n", ft_strlen("0123456789"));
	
	printf("ft_memset(frase que eu quero mudar, $, 5) =  %p\n", ft_memset("frase que eu quero mudar", '$', 5));
#include <stddef.h>
	
	
}

