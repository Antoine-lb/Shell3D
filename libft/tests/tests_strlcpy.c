#include <stdio.h>
#include <string.h>
#include <stddef.h>

#include "../ft_strlcpy.c"

int main()
{
   { 
        size_t          len = 40;
        size_t          ft_len = 40;
        const char      src[] = "asdf";
        const char      ft_src[] = "asdf";
        char            dest[len];
        char            ft_dest[ft_len];
        printf("lib = %lu -> %s\n", strlcpy(dest, src, len), dest);
        printf("cus = %lu -> %s\n\n", ft_strlcpy(ft_dest, ft_src, ft_len), ft_dest);
    }

    { 
        size_t          len = 40;
        size_t          ft_len = 40;
        const char      src[] = "";
        const char      ft_src[] = "";
        char            dest[len];
        char            ft_dest[ft_len];
        printf("lib = %lu -> %s\n", strlcpy(dest, src, len), dest);
        printf("cus = %lu -> %s\n\n", ft_strlcpy(ft_dest, ft_src, ft_len), ft_dest);
    }

    { 
        size_t          len = 40;
        size_t          ft_len = 40;
        const char      src[] = "";
        const char      ft_src[] = "";
        char            dest[len + 40];
        char            ft_dest[ft_len + 40];
        printf("lib = %lu -> %s\n", strlcpy(dest, src, len), dest);
        printf("cus = %lu -> %s\n\n", ft_strlcpy(ft_dest, ft_src, ft_len), ft_dest);
    }

    { 
        size_t          len = 40;
        size_t          ft_len = 40;
        const char      src[] = "023498752093845702938475203945870239875209348750293487520934875XXXXXXXXXXXX";
        const char      ft_src[] = "023498752093845702938475203945870239875209348750293487520934875XXXXXXXXXXXX";
        char            dest[len + 40];
        char            ft_dest[ft_len + 40];
        printf("lib = %lu -> %s\n", strlcpy(dest, src, len), dest);
        printf("cus = %lu -> %s\n\n", ft_strlcpy(ft_dest, ft_src, ft_len), ft_dest);
    }

    { 
        size_t          len = 3;
        size_t          ft_len = 3;
        const char      src[] = "333";
        const char      ft_src[] = "333";
        char            dest[len];
        char            ft_dest[ft_len];
        printf("lib = %lu -> %s\n", strlcpy(dest, src, len), dest);
        printf("cus = %lu -> %s\n\n", ft_strlcpy(ft_dest, ft_src, ft_len), ft_dest);
    }

    { 
        size_t          len = 4;
        size_t          ft_len = 4;
        const char      src[] = "333";
        const char      ft_src[] = "333";
        char            dest[len];
        char            ft_dest[ft_len];
        printf("lib = %lu -> %s\n", strlcpy(dest, src, len), dest);
        printf("cus = %lu -> %s\n\n", ft_strlcpy(ft_dest, ft_src, ft_len), ft_dest);
    }

    { 
        size_t          len = 4;
        size_t          ft_len = 4;
        const char      src[] = "3334";
        const char      ft_src[] = "3334";
        char            dest[len];
        char            ft_dest[ft_len];
        printf("lib = %lu -> %s\n", strlcpy(dest, src, len), dest);
        printf("cus = %lu -> %s\n\n", ft_strlcpy(ft_dest, ft_src, ft_len), ft_dest);
    }

    { 
        size_t          len = 0;
        size_t          ft_len = 0;
        const char      src[] = "3334";
        const char      ft_src[] = "3334";
        char            dest[len];
        char            ft_dest[ft_len];
        printf("lib = %lu -> %s\n", strlcpy(dest, src, len), dest);
        printf("cus = %lu -> %s\n\n", ft_strlcpy(ft_dest, ft_src, ft_len), ft_dest);
    }

    { 
        size_t          len = 1;
        size_t          ft_len = 1;
        const char      src[] = "3334";
        const char      ft_src[] = "3334";
        char            dest[len];
        char            ft_dest[ft_len];
        printf("lib = %lu -> %s\n", strlcpy(dest, src, len), dest);
        printf("cus = %lu -> %s\n\n", ft_strlcpy(ft_dest, ft_src, ft_len), ft_dest);
    }

    { 
        size_t          len = 100;
        size_t          ft_len = 100;
        const char      src[] = "3334";
        const char      ft_src[] = "3334";
        char            dest[len];
        char            ft_dest[ft_len];
        printf("lib = %lu -> %s\n", strlcpy(dest, src, len), dest);
        printf("cus = %lu -> %s\n", ft_strlcpy(ft_dest, ft_src, ft_len), ft_dest);
        printf("lib char test = %c\n", dest[77]);
        printf("cus char test = %c\n\n", ft_dest[77]);
    }

    {
        char            dest[15];
        char            ft_dest[15];
        memset(dest, 0, 15);
        memset(dest, 'r', 6);
        memset(ft_dest, 0, 15);
        memset(ft_dest, 'r', 6);
        printf("lib = %lu -> %s\n", strlcpy(dest, "", 15), dest);
        printf("cus = %lu -> %s\n", ft_strlcpy(ft_dest, "", 15), ft_dest);
    }
}
