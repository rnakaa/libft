#include "libft.h"
#include <ctype.h>
#include <stdio.h>
#include <string.h>
//      gcc -Wall -Wextra -Werror ft_memcpy.c  test.c -o aaa.out && ./aaa.out 
// alpha

// int main()
// {
//     int a = -10000000,b,c;
//     while(a <=100000000)
//     {
//         c = ft_isalpha(a);
//         b = isalpha(a);
// 	if ((c == 0 && b != 0)||(c != 0 && b == 0))
//         printf("error = %d\n",a);
//     a++;
//     }
// 	return (0);
// }

// digit

// int main()
// {
//     int a = -100,b,c;
//     while(a <=200)
//     {
//         c = ft_isdigit(a);
//         b = isdigit(a);
// 	if ((c == 0 && b != 0)||(c != 0 && b == 0))
//         printf("error = %d\n",a);
//     a++;
//     }
// 	return (0);
// }

// alnum

// int	main(void)
// {
// 	int a = -100,b,c;
//     while(a <=200)
//     {
//         c = ft_isalnum(a);
//         b = isalnum(a);
// 	if ((c == 0 && b != 0)||(c != 0 && b == 0))
//         printf("error = %d\n",a);
//     a++;
//     }
// 	return (0);
// }

// ascii

// int	main(void)
// {
// 	int a = -100,b,c;
//     while(a <=200)
//     {
//         c = ft_isascii(a);
//         b = isascii(a);
// 	if ((c == 0 && b != 0)||(c != 0 && b == 0))
//         printf("error = %d\n",a);
//     a++;
//     }
// 	return (0);
//  }

// print

// int	main(void)
// {
// 	int a = -100000000,b,c;
//     while(a <=200000000)
//     {
//         c = ft_isprint(a);
//         b = isprint(a);
// 	if ((c == 0 && b != 0)||(c != 0 && b == 0))
//         printf("error = %d\n",a);
//     a++;
//     }
// 	return (0);
// }

// memset

// int	main(void)
// {
// 	int a[] = {49,50,51,52,53,54,'\0'};
//     int b[] = {49,50,51,52,53,54,'\0'};
//     ft_memset(a+1,'0',2);
//     memset(b+1,'0',2);

//      int c = 0;

//     while(6>c)
//     {
//         printf("%c",a[c]);
//         c++;
//     }

//     printf("\n");
//     c = 0;
// 	return (0);
//     while(6>c)
//     {
//         printf("%c",b[c]);
//         c++;
//     }

// }

// int	main(void)
// {
// 	char a[] = "123456789abcdefgh";
//     char b[] = "123456789abcdefgh";
//     printf("%lu\n",ft_strlen(a));
//     printf("%lu\n",strlen(b));
// 	return (0);
// }

// int main(void)
// {
//     char a[10]="12345",b[]="67891234";
//     char c[10]="12345",d[]="67891234";
//     ft_strlcat(a,b,3);
//     strlcat(c,d,3);
//     printf("%s\n",a);
//     printf("%s\n",c);

// }

// bzero

// int main(void)
// {
//     char a[] = "123456789abcdefgh";
//     char b[] = "123456789abcdefgh";
//     bzero(&a, 10);
//     ft_bzero(&b, 10);
//     int s = 0;
//     while (s < 15)
//     {
//         printf("%c\n", a[s]);
//         printf("%c\n", b[s]);
//         s++;
//     }
//     return (0);
// }

// memcpy

// int main(void)
// {
//     char a[] = "abcdefghijklmno";
//     char b[] = "abcdefghijklmno";
//     char c[] = "123456789abcdefgh";
//     char d[] = "123456789abcdefgh";

//     memcpy(&a, &a, 18);
//     ft_memcpy(&b, &b, 18);
//     int s = 0;
//     while (s < 18)
//     {
//         printf("%c\n", a[s]);
//         printf("%c\n", b[s]);
//         s++;
//     }
//     return (0);
// }

// memmove

// int main(void)
// {
//     char a[] = "11111111111111";
//     char b[] = "11111111111111";
//     char c[] = "123456789abcdefgh";
//     char d[] = "123456789abcdefgh";

//     memmove(&c, &a, 18);
//     ft_memmove(&d, &b, 18);
//     int s = 0;
//     while (s < 18)
//     {
//         printf("%c\n", c[s]);
//         printf("%c\n", d[s]);
//         s++;
//     }
//     return (0);
// }

//strlcpy

int main(void)
{
	char a[] = "11111";
	char b[] = "11111";
    char c[] = "123456789abcdefgh";
    char d[] = "123456789abcdefgh";

    strlcpy(c, a, 10);
    ft_strlcpy(d, b, 10);
    int s = 0;
    while (s < 12)
    {
        printf("%c\n", c[s]);
        printf("%c\n", d[s]);
        s++;
    }
    return (0);
}
