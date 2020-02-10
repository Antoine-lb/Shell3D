#include <stdio.h>
#include <string.h>
#include <stddef.h>

#include "../ft_strlcat.c"

int main()
{
   { 
        const char      src[] = "asdf";
        const char      ft_src[] = "asdf";
        char            dest[100] = "1234";
        char            ft_dest[100] = "1234";
        printf("lib = %lu -> %s\n", strlcat(dest, src, 100), dest);
        printf("cus = %lu -> %s\n\n", ft_strlcat(ft_dest, ft_src, 100), ft_dest);
    }

    { 
        const char      src[] = "";
        const char      ft_src[] = "";
        char            dest[100] = "1234";
        char            ft_dest[100] = "1234";
        printf("lib = %lu -> %s\n", strlcat(dest, src, 100), dest);
        printf("cus = %lu -> %s\n\n", ft_strlcat(ft_dest, ft_src, 100), ft_dest);
    }

   { 
        const char      src[] = "asdf";
        const char      ft_src[] = "asdf";
        char            dest[100] = "";
        char            ft_dest[100] = "";
        printf("lib = %lu -> %s\n", strlcat(dest, src, 100), dest);
        printf("cus = %lu -> %s\n\n", ft_strlcat(ft_dest, ft_src, 100), ft_dest);
    }

   { 
        const char      src[] = "";
        const char      ft_src[] = "";
        char            dest[100] = "";
        char            ft_dest[100] = "";
        printf("lib = %lu -> %s\n", strlcat(dest, src, 100), dest);
        printf("cus = %lu -> %s\n\n", ft_strlcat(ft_dest, ft_src, 100), ft_dest);
    }

   { 
        const char      src[] = "asdf";
        const char      ft_src[] = "asdf";
        char            dest[100] = "1234";
        char            ft_dest[100] = "1234";
        printf("lib = %lu -> %s\n", strlcat(dest, src, 0), dest);
        printf("cus = %lu -> %s\n\n", ft_strlcat(ft_dest, ft_src, 0), ft_dest);
    }

   { 
        const char      src[] = "asdf";
        const char      ft_src[] = "asdf";
        char            dest[100] = "1234";
        char            ft_dest[100] = "1234";
        printf("lib = %lu -> %s\n", strlcat(dest, src, 1), dest);
        printf("cus = %lu -> %s\n\n", ft_strlcat(ft_dest, ft_src, 1), ft_dest);
    }


   { 
        const char      src[] = "asdf";
        const char      ft_src[] = "asdf";
        char            dest[100] = "1234";
        char            ft_dest[100] = "1234";
        printf("lib = %lu -> %s\n", strlcat(dest, src, 2), dest);
        printf("cus = %lu -> %s\n\n", ft_strlcat(ft_dest, ft_src, 2), ft_dest);
    }


   { 
        const char      src[] = "asdf";
        const char      ft_src[] = "asdf";
        char            dest[100] = "1234";
        char            ft_dest[100] = "1234";
        printf("lib = %lu -> %s\n", strlcat(dest, src, 3), dest);
        printf("cus = %lu -> %s\n\n", ft_strlcat(ft_dest, ft_src, 3), ft_dest);
    }

   { 
        const char      src[] = "asdf";
        const char      ft_src[] = "asdf";
        char            dest[100] = "1234";
        char            ft_dest[100] = "1234";
        printf("lib = %lu -> %s\n", strlcat(dest, src, 4), dest);
        printf("cus = %lu -> %s\n\n", ft_strlcat(ft_dest, ft_src, 4), ft_dest);
    }

   { 
        const char      src[] = "asdf";
        const char      ft_src[] = "asdf";
        char            dest[100] = "1234";
        char            ft_dest[100] = "1234";
        printf("lib = %lu -> %s\n", strlcat(dest, src, 5), dest);
        printf("cus = %lu -> %s\n\n", ft_strlcat(ft_dest, ft_src, 5), ft_dest);
    }

   { 
        const char      src[] = "asdf";
        const char      ft_src[] = "asdf";
        char            dest[100] = "1234";
        char            ft_dest[100] = "1234";
        printf("lib = %lu -> %s\n", strlcat(dest, src, 6), dest);
        printf("cus = %lu -> %s\n\n", ft_strlcat(ft_dest, ft_src, 6), ft_dest);
    }

   { 
        const char      src[] = "asdf";
        const char      ft_src[] = "asdf";
        char            dest[100] = "1234";
        char            ft_dest[100] = "1234";
        printf("lib = %lu -> %s\n", strlcat(dest, src, 7), dest);
        printf("cus = %lu -> %s\n\n", ft_strlcat(ft_dest, ft_src, 7), ft_dest);
    }

   { 
        const char      src[] = "asdf";
        const char      ft_src[] = "asdf";
        char            dest[100] = "1234";
        char            ft_dest[100] = "1234";
        printf("lib = %lu -> %s\n", strlcat(dest, src, 8), dest);
        printf("cus = %lu -> %s\n\n", ft_strlcat(ft_dest, ft_src, 8), ft_dest);
    }

   { 
        const char      src[] = "asdf";
        const char      ft_src[] = "asdf";
        char            dest[100] = "1234";
        char            ft_dest[100] = "1234";
        printf("lib = %lu -> %s\n", strlcat(dest, src, 9), dest);
        printf("cus = %lu -> %s\n\n", ft_strlcat(ft_dest, ft_src, 9), ft_dest);
    }

   { 
        const char      src[] = "asdfasdfasdfasdfasdfasdfasdfasdfasdfasdfasdfasdfasdfasdfasdfasdfasdfasdfasdfasdfasdf";
        const char      ft_src[] = "asdfasdfasdfasdfasdfasdfasdfasdfasdfasdfasdfasdfasdfasdfasdfasdfasdfasdfasdfasdfasdf";
        char            dest[100] = "1234";
        char            ft_dest[100] = "1234";
        printf("lib = %lu -> %s\n", strlcat(dest, src, 44), dest);
        printf("cus = %lu -> %s\n\n", ft_strlcat(ft_dest, ft_src, 44), ft_dest);
    }

    { 
        const char      src[] = "";
        const char      ft_src[] = "";
        char            dest[100] = "";
        char            ft_dest[100] = "";
        printf("lib = %lu -> %s\n", strlcat(dest, src, 0), dest);
        printf("cus = %lu -> %s\n\n", ft_strlcat(ft_dest, ft_src, 0), ft_dest);
    }

    { 
        const char      src[] = "";
        const char      ft_src[] = "";
        char            dest[] = "";
        char            ft_dest[] = "";
        printf("lib = %lu -> %s\n", strlcat(dest, src, 0), dest);
        printf("cus = %lu -> %s\n\n", ft_strlcat(ft_dest, ft_src, 0), ft_dest);
    }

    { 
        const char      src[] = "";
        const char      ft_src[] = "";
        char            dest[1] = "";
        char            ft_dest[1] = "";
        printf("lib = %lu -> %s\n", strlcat(dest, src, 0), dest);
        printf("cus = %lu -> %s\n\n", ft_strlcat(ft_dest, ft_src, 0), ft_dest);
    }

    { 
        const char      src[] = "";
        const char      ft_src[] = "";
        char            dest[1] = "";
        char            ft_dest[1] = "";
        printf("lib = %lu -> %s\n", strlcat(dest, src, 1), dest);
        printf("cus = %lu -> %s\n\n", ft_strlcat(ft_dest, ft_src, 1), ft_dest);
    }

    { 
        const char      src[] = "";
        const char      ft_src[] = "";
        char            dest[1] = "r";
        char            ft_dest[1] = "r";
        printf("dst has no NULL at the end (edge case)\n");
        printf("lib = %lu -> %s\n", strlcat(dest, src, 1), dest);
        printf("cus = %lu -> %s\n\n", ft_strlcat(ft_dest, ft_src, 1), ft_dest);
    }

    { 
        const char      src[] = "";
        const char      ft_src[] = "";
        char            dest[2] = "r";
        char            ft_dest[2] = "r";
        printf("lib = %lu -> %s\n", strlcat(dest, src, 1), dest);
        printf("cus = %lu -> %s\n\n", ft_strlcat(ft_dest, ft_src, 1), ft_dest);
    }

    { 
        const char      src[100] = "lorem";
        const char      ft_src[100] = "lorem";
        char            dest[200] = "a";
        char            ft_dest[200] = "a";
        printf("lib = %lu -> %s\n", strlcat(dest, src, 15), dest);
        printf("cus = %lu -> %s\n\n", ft_strlcat(ft_dest, ft_src, 15), ft_dest);
    }
}