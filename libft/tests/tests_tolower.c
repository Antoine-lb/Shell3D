#include <stdio.h>
#include <ctype.h>
#include "../ft_tolower.c"

void test(int test_val)
{
    if (tolower(test_val) == ft_tolower(test_val))
    {
        printf("[good] ");
    }
    else {
        printf("[bad] ");
    }
    printf("%d %d\n", tolower(test_val), ft_tolower(test_val));
}

int main()
{
    int count = -30;

    while (count < 200) {
        test(count);
        count++;
    }
}