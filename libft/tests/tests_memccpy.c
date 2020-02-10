#include <stdio.h>
#include <string.h>
#include "../ft_memccpy.c"

void printArray(int arr[], int n) 
{ 
   for (int i=0; i<n; i++) 
      printf("%d ", arr[i]); 
}

int main()
{
    char    src[] = "GeeksForGeeks is for programming geeks.";
    char    dst[100]= "aaaaaaaaaaaaaaaxaaaaaaa";
    char    ft_dst[100]= "aaaaaaaaaaaaaaaxaaaaaaa";
    char    *last;
    char    *ft_last;
    last = memccpy(dst, src, 'i', 39*sizeof(char)); 
    ft_last = ft_memccpy(ft_dst, src, 'i', 39*sizeof(char)); 
    printf("lib = %s\n", dst);
    printf("lib = %s\n", last);
    printf("cus = %s\n", ft_dst);
    printf("cus = %s\n\n", ft_last);


    {
        char    src[] = "GeeksForGeeks is for programming geeks.";
        char    dst[100]= "aaaaaaaaaaaaaaaxaaaaaaa";
        char    ft_dst[100]= "aaaaaaaaaaaaaaaxaaaaaaa";
        char    *last;
        char    *ft_last;
        last = memccpy(dst, src, 'x', 39*sizeof(char)); 
        ft_last = ft_memccpy(ft_dst, src, 'x', 39*sizeof(char)); 
        printf("lib = %s\n", dst);
        printf("lib = %s\n", last);
        printf("cus = %s\n", ft_dst);
        printf("cus = %s\n\n", ft_last);
    }

    {
        char    src[] = "GeeksForGeeks is for programming geeks.";
        char    dst[100]= "aaaaaaaaaaaaaaaxaaaaaaa";
        char    ft_dst[100]= "aaaaaaaaaaaaaaaxaaaaaaa";
        char    *last;
        char    *ft_last;
        last = memccpy(dst, src, 'x', 1*sizeof(char)); 
        ft_last = ft_memccpy(ft_dst, src, 'x', 1*sizeof(char)); 
        printf("lib = %s\n", dst);
        printf("lib = %s\n", last);
        printf("cus = %s\n", ft_dst);
        printf("cus = %s\n\n", ft_last);
    }

    {
        char    src[] = "C";
        char    dst[100]= "aaaaaaaaaaaaaaaxaaaaaaa";
        char    ft_dst[100]= "aaaaaaaaaaaaaaaxaaaaaaa";
        char    *last;
        char    *ft_last;
        last = memccpy(dst, src, 'x', 1*sizeof(char)); 
        ft_last = ft_memccpy(ft_dst, src, 'x', 1*sizeof(char)); 
        printf("lib = %s\n", dst);
        printf("lib = %s\n", last);
        printf("cus = %s\n", ft_dst);
        printf("cus = %s\n\n", ft_last);
    }
 
    {
        char    src[] = "C";
        char    dst[100]= "";
        char    ft_dst[100]= "";
        char    *last;
        char    *ft_last;
        last = memccpy(dst, src, 'x', 1*sizeof(char)); 
        ft_last = ft_memccpy(ft_dst, src, 'x', 1*sizeof(char)); 
        printf("lib = %s\n", dst);
        printf("lib = %s\n", last);
        printf("cus = %s\n", ft_dst);
        printf("cus = %s\n\n", ft_last);
    }

    {
        char    src[] = "";
        char    dst[100]= "";
        char    ft_dst[100]= "";
        char    *last;
        char    *ft_last;
        last = memccpy(dst, src, 'x', 1*sizeof(char)); 
        ft_last = ft_memccpy(ft_dst, src, 'x', 1*sizeof(char)); 
        printf("lib = %s\n", dst);
        printf("lib = %s\n", last);
        printf("cus = %s\n", ft_dst);
        printf("cus = %s\n\n", ft_last);
    }

    {
        char    src[] = "";
        char    dst[100]= "";
        char    ft_dst[100]= "";
        char    *last;
        char    *ft_last;
        last = memccpy(dst, src, 'x', 0*sizeof(char)); 
        ft_last = ft_memccpy(ft_dst, src, 'x', 0*sizeof(char)); 
        printf("lib = %s\n", dst);
        printf("lib = %s\n", last);
        printf("cus = %s\n", ft_dst);
        printf("cus = %s\n\n", ft_last);
    }

    {
        char    src[] = "";
        char    dst[100]= "asdf";
        char    ft_dst[100]= "asdf";
        char    *last;
        char    *ft_last;
        last = memccpy(dst, src, 'x', 0*sizeof(char)); 
        ft_last = ft_memccpy(ft_dst, src, 'x', 0*sizeof(char)); 
        printf("lib = %s\n", dst);
        printf("lib = %s\n", last);
        printf("cus = %s\n", ft_dst);
        printf("cus = %s\n\n", ft_last);
    }

    {
        char    src[] = "d";
        char    dst[100]= "asdf";
        char    ft_dst[100]= "asdf";
        char    *last;
        char    *ft_last;
        last = memccpy(dst, src, 'x', 0*sizeof(char)); 
        ft_last = ft_memccpy(ft_dst, src, 'x', 0*sizeof(char)); 
        printf("lib = %s\n", dst);
        printf("lib = %s\n", last);
        printf("cus = %s\n", ft_dst);
        printf("cus = %s\n\n", ft_last);
    }

    {
        char    src[] = "x";
        char    dst[100]= "asdf";
        char    ft_dst[100]= "asdf";
        char    *last;
        char    *ft_last;
        last = memccpy(dst, src, 'x', 0*sizeof(char)); 
        ft_last = ft_memccpy(ft_dst, src, 'x', 0*sizeof(char)); 
        printf("lib = %s\n", dst);
        printf("lib = %s\n", last);
        printf("cus = %s\n", ft_dst);
        printf("cus = %s\n\n", ft_last);
    }

    {
        char    src[] = "x";
        char    dst[100]= "asdf";
        char    ft_dst[100]= "asdf";
        char    *last;
        char    *ft_last;
        last = memccpy(dst, src, 'x', 2*sizeof(char)); 
        ft_last = ft_memccpy(ft_dst, src, 'x', 2*sizeof(char)); 
        printf("lib = %s\n", dst);
        printf("lib = %s\n", last);
        printf("cus = %s\n", ft_dst);
        printf("cus = %s\n\n", ft_last);
    }

    {
        char    src[] = "";
        char    dst[100]= "asdf";
        char    ft_dst[100]= "asdf";
        char    *last;
        char    *ft_last;
        last = memccpy(dst, src, 'x', 2*sizeof(char)); 
        ft_last = ft_memccpy(ft_dst, src, 'x', 2*sizeof(char)); 
        printf("lib = %s\n", dst);
        printf("lib = %s\n", last);
        printf("cus = %s\n", ft_dst);
        printf("cus = %s\n\n", ft_last);
    }

    {
        char    src[] = "";
        char    dst[100]= "";
        char    ft_dst[100]= "";
        char    *last;
        char    *ft_last;
        last = memccpy(dst, src, 'x', 2*sizeof(char)); 
        ft_last = ft_memccpy(ft_dst, src, 'x', 2*sizeof(char)); 
        printf("lib = %s\n", dst);
        printf("lib = %s\n", last);
        printf("cus = %s\n", ft_dst);
        printf("cus = %s\n\n", ft_last);
    }

    {
        char    src[] = "salut";
        char    dst[100]= "";
        char    ft_dst[100]= "";
        char    *last;
        char    *ft_last;
        last = memccpy(dst, src, 't', 5*sizeof(char)); 
        ft_last = ft_memccpy(ft_dst, src, 't', 5*sizeof(char)); 
        printf("lib = %s\n", dst);
        printf("lib = %s\n", last);
        printf("cus = %s\n", ft_dst);
        printf("cus = %s\n\n", ft_last);
    }
}