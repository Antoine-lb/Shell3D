#include <stdio.h>
#include <ctype.h>
#include "../ft_toupper.c"

void test(int test_val)
{
    if (toupper(test_val) == ft_toupper(test_val))
    {
        printf("[good] ");
    }
    else {
        printf("[bad] ");
    }
    printf("%d %d\n", toupper(test_val), ft_toupper(test_val));
}

int main()
{
    int count = -30;

    while (count < 200) {
        test(count);
        count++;
    }
}