#include <stdio.h>
#include <string.h>
#include "../ft_memset.c"

void printArray(int arr[], int n) 
{ 
   for (int i=0; i<n; i++) 
      printf("%d ", arr[i]); 
}

int main()
{
    char str[50] = "GeeksForGeeks is for programming geeks."; 
    char ft_str[50] = "GeeksForGeeks is for programming geeks."; 
    memset(str + 13, '.', 8*sizeof(char)); 
    ft_memset(ft_str + 13, '.', 8*sizeof(char)); 
    printf("lib = %s\n", str);
    printf("cus = %s\n", ft_str);

    int n = 10; 
    int arr[n];
    int ft_arr[n];
    memset(arr, 10, n*sizeof(arr[0])); 
    ft_memset(ft_arr, 10, n*sizeof(ft_arr[0])); 
    printf("lib = "); 
    printArray(arr, n); 
    printf("\n"); 
    printf("cus = "); 
    printArray(ft_arr, n); 
    printf("\n");

    {
        int n = 10; 
        int arr[n];
        int ft_arr[n];
        memset(arr, -1, n*sizeof(arr[0])); 
        ft_memset(ft_arr, -1, n*sizeof(ft_arr[0])); 
        printf("lib = "); 
        printArray(arr, n); 
        printf("\n"); 
        printf("cus = "); 
        printArray(ft_arr, n); 
        printf("\n");
    }

    {
        int n = 0; 
        int arr[n];
        int ft_arr[n];
        memset(arr, -1, n*sizeof(arr[0])); 
        ft_memset(ft_arr, -1, n*sizeof(ft_arr[0])); 
        printf("lib = "); 
        printArray(arr, n); 
        printf("\n"); 
        printf("cus = "); 
        printArray(ft_arr, n); 
        printf("\n");
    }
}