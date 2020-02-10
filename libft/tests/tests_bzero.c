#include <stdio.h>
#include <string.h>
#include "../ft_bzero.c"

void printArray(int arr[], int n) 
{ 
   for (int i=0; i<n; i++) 
      printf("%d ", arr[i]); 
}

int main()
{
    char str[50] = "GeeksForGeeks is for programming geeks."; 
    char ft_str[50] = "GeeksForGeeks is for programming geeks."; 
    bzero(str + 13, 8*sizeof(char)); 
    ft_bzero(ft_str + 13, 8*sizeof(char)); 
    printf("lib = %s\n", str);
    printf("cus = %s\n", ft_str);

    int n = 10; 
    int arr[n];
    int ft_arr[n];
    bzero(arr, n*sizeof(arr[0])); 
    ft_bzero(ft_arr, n*sizeof(ft_arr[0])); 
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
        bzero(arr, n*sizeof(arr[0])); 
        ft_bzero(ft_arr, n*sizeof(ft_arr[0])); 
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
        bzero(arr, n*sizeof(arr[0])); 
        ft_bzero(ft_arr, n*sizeof(ft_arr[0])); 
        printf("lib = "); 
        printArray(arr, n); 
        printf("\n"); 
        printf("cus = "); 
        printArray(ft_arr, n); 
        printf("\n");
    }
}