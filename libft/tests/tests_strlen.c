#include <stdio.h>
#include <string.h>
#include "../ft_strlen.c"

int main()
{
    printf("%lu %lu\n", strlen(""), ft_strlen(""));
    printf("%lu %lu\n", strlen("1"), ft_strlen("1"));
    printf("%lu %lu\n", strlen("12"), ft_strlen("12"));
    printf("%lu %lu\n", strlen("123"), ft_strlen("123"));
    printf("%lu %lu\n", strlen("-21390841-03481"), ft_strlen("-21390841-03481"));
    printf("%lu %lu\n", strlen(":!@#$^&*"), ft_strlen(":!@#$^&*"));
}