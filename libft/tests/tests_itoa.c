#include <stdio.h>
#include "../ft_itoa.c"

int main()
{
    int num = 100;
    printf("exp = %d\nft_ = %s\n\n", num, ft_itoa(num));

    {
        int num = 33;
        printf("exp = %d\nft_ = %s\n\n", num, ft_itoa(num));
    }

    {
        int num = 1;
        printf("exp = %d\nft_ = %s\n\n", num, ft_itoa(num));
    }

    {
        int num = 1234;
        printf("exp = %d\nft_ = %s\n\n", num, ft_itoa(num));
    }

    {
        int num = -0;
        printf("exp = %d\nft_ = %s\n\n", num, ft_itoa(num));
    }

    {
        int num = -1000;
        printf("exp = %d\nft_ = %s\n\n", num, ft_itoa(num));
    }

    {
        int num = -1234567890;
        printf("exp = %d\nft_ = %s\n\n", num, ft_itoa(num));
    }

    {
        int num = -1;
        printf("exp = %d\nft_ = %s\n\n", num, ft_itoa(num));
    }

    {
        int num = 1;
        printf("exp = %d\nft_ = %s\n\n", num, ft_itoa(num));
    }

    {
        int num = 0;
        printf("exp = %d\nft_ = %s\n\n", num, ft_itoa(num));
    }

    {
        int num = -30;
        printf("exp = %d\nft_ = %s\n\n", num, ft_itoa(num));
    }

    {
        int num = -35546540;
        printf("exp = %d\nft_ = %s\n\n", num, ft_itoa(num));
    }
    {
        int num = -2147483648LL;
        printf("exp = %d\nft_ = %s\n\n", num, ft_itoa(num));
    }
}