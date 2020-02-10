#include <stdio.h>
#include <string.h>
#include "../ft_memmove.c"

void printArray(int arr[], int n) 
{ 
   for (int i=0; i<n; i++) 
      printf("%d ", arr[i]); 
}

int main()
{
    // char test[] = "132456789013245678901324567890";
    // printf("%s", memmove(test, &test[3], 5));

    // dest == "ksfor"
    // src == "Geeksfor"

    // memmove == "GeeGeeksfor"

    char csrc[100] = "01234";
    memmove(csrc+2, csrc, strlen(csrc)); 
    printf("lib = %s\n", csrc);

    char ft_csrc[100] = "01234"; 
    ft_memmove(ft_csrc+2, ft_csrc, strlen(ft_csrc));
    printf("ft_ = %s\n", ft_csrc);

    //ft_csrc;

    return (0);
    // char csrc[100] = "1234567890"; 
    // char ft_csrc[100] = "1234567890"; 
    // memmove(csrc+5, csrc+4, strlen(csrc)+1); 
    //     ft_memmove(ft_csrc+5, ft_csrc+4, strlen(ft_csrc)+1); 
    //     printf("lib = %s\n", csrc);
    //     printf("ft_ = %s\n\n", ft_csrc);
    // }
}