#include "../ft_putnbr_fd.c"

void    ft_putchar_fd2(char c, int fd)
{
    write(fd, &c, 1);
}

int main()
{
    // printf("\nexp = 44\n ft_ = ");
    ft_putnbr_fd(-44, 1);
    ft_putchar_fd2('\n', 1);
    ft_putnbr_fd(-2147483648, 1);
    ft_putchar_fd2('\n', 1);
}