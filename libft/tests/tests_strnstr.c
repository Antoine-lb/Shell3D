#include <stdio.h>
#include <string.h>
#include <stddef.h>

#include "../ft_strnstr.c"

int main()
{
   { 
        const char      needle[] = "";
        const char      ft_needle[] = "";
        const char      haystack[100] = "";
        const char      ft_haystack[100] = "";
        printf("lib = %s\n", strnstr(haystack, needle, 100));
        printf("cus = %s\n", ft_strnstr(ft_haystack, ft_needle, 100));
    }

    { 
        const char      needle[] = "asdf";
        const char      ft_needle[] = "asdf";
        const char      haystack[100] = "";
        const char      ft_haystack[100] = "";
        printf("lib = %s\n", strnstr(haystack, needle, 100));
        printf("cus = %s\n", ft_strnstr(ft_haystack, ft_needle, 100));
    }

    { 
        const char      needle[] = "asdf";
        const char      ft_needle[] = "asdf";
        const char      haystack[100] = "hello asdf world";
        const char      ft_haystack[100] = "hello asdf world";
        printf("lib = %s\n", strnstr(haystack, needle, 100));
        printf("cus = %s\n", ft_strnstr(ft_haystack, ft_needle, 100));
    }

    { 
        const char      needle[] = "asdf";
        const char      ft_needle[] = "asdf";
        const char      haystack[100] = "hello asxdf world";
        const char      ft_haystack[100] = "hello asxdf world";
        printf("lib = %s\n", strnstr(haystack, needle, 100));
        printf("cus = %s\n", ft_strnstr(ft_haystack, ft_needle, 100));
    }

    { 
        const char      needle[] = "";
        const char      ft_needle[] = "";
        const char      haystack[100] = "hello asxdf world";
        const char      ft_haystack[100] = "hello asxdf world";
        printf("lib = %s\n", strnstr(haystack, needle, 100));
        printf("cus = %s\n", ft_strnstr(ft_haystack, ft_needle, 100));
    }

    { 
        const char      needle[] = "";
        const char      ft_needle[] = "";
        const char      haystack[100] = "";
        const char      ft_haystack[100] = "";
        printf("lib = %s\n", strnstr(haystack, needle, 100));
        printf("cus = %s\n", ft_strnstr(ft_haystack, ft_needle, 100));
    }

    { 
        const char      needle[] = "asdf";
        const char      ft_needle[] = "asdf";
        const char      haystack[100] = "hello asxdf world";
        const char      ft_haystack[100] = "hello asxdf world";
        printf("lib = %s\n", strnstr(haystack, needle, 8));
        printf("cus = %s\n", ft_strnstr(ft_haystack, ft_needle, 8));
    }

    { 
        const char      needle[] = "asdf";
        const char      ft_needle[] = "asdf";
        const char      haystack[100] = "hello asxdf world";
        const char      ft_haystack[100] = "hello asxdf world";
        printf("lib = %s\n", strnstr(haystack, needle, 0));
        printf("cus = %s\n", ft_strnstr(ft_haystack, ft_needle, 0));
    }

    { 
        const char      needle[] = "asdf";
        const char      ft_needle[] = "asdf";
        const char      haystack[100] = "hello as asdf world";
        const char      ft_haystack[100] = "hello as asdf world";
        printf("lib = %s\n", strnstr(haystack, needle, 80));
        printf("cus = %s\n", ft_strnstr(ft_haystack, ft_needle, 80));
    }

    { 
        const char      needle[] = "asdf";
        const char      ft_needle[] = "asdf";
        const char      haystack[100] = "hello as asd assd asdf world";
        const char      ft_haystack[100] = "hello as asd assd asdf world";
        printf("lib = %s\n", strnstr(haystack, needle, 80));
        printf("cus = %s\n", ft_strnstr(ft_haystack, ft_needle, 80));
    }


    { 
        const char      needle[] = "aaaaaaaaaaa";
        const char      ft_needle[] = "aaaaaaaaaaa";
        const char      haystack[100] = "aaabbaaaagggdddavavavavavaaaagagaaaaaaaaaaaaaaaXXX";
        const char      ft_haystack[100] = "aaabbaaaagggdddavavavavavaaaagagaaaaaaaaaaaaaaaXXX";
        printf("lib = %s\n", strnstr(haystack, needle, 80));
        printf("cus = %s\n", ft_strnstr(ft_haystack, ft_needle, 80));
    }

    { 
        const char      needle[] = "aaaaaaaaaaa";
        const char      ft_needle[] = "aaaaaaaaaaa";
        const char      haystack[100] = "aaabbaaaagggdddavavavavavaaaagagaaaaaaaaaaaaaaaXXX";
        const char      ft_haystack[100] = "aaabbaaaagggdddavavavavavaaaagagaaaaaaaaaaaaaaaXXX";
        printf("lib = %s\n", strnstr(haystack, needle, 80));
        printf("cus = %s\n", ft_strnstr(ft_haystack, ft_needle, 80));
    }

    { 
        const char      needle[] = "aaaaaaaaaaan";
        const char      ft_needle[] = "aaaaaaaaaaan";
        const char      haystack[100] = "aaabbaaaagggdddavavavavavaaaagagaaaaaaaaaaaaaaaXXX";
        const char      ft_haystack[100] = "aaabbaaaagggdddavavavavavaaaagagaaaaaaaaaaaaaaaXXX";
        printf("lib = %s\n", strnstr(haystack, needle, 80));
        printf("cus = %s\n", ft_strnstr(ft_haystack, ft_needle, 80));
    }


    { 
        const char      needle[] = "a";
        const char      ft_needle[] = "a";
        const char      haystack[100] = "aaabbaaaagggdddavavavavavaaaagagaaaaaaaaaaaaaaaXXX";
        const char      ft_haystack[100] = "aaabbaaaagggdddavavavavavaaaagagaaaaaaaaaaaaaaaXXX";
        printf("lib = %s\n", strnstr(haystack, needle, 80));
        printf("cus = %s\n", ft_strnstr(ft_haystack, ft_needle, 80));
    }

    { 
        const char      needle[] = "ac";
        const char      ft_needle[] = "ac";
        const char      haystack[100] = "aaabbaaaagggdddavavavavavaaaagagaaaaaaaaaaaaaaaXXX";
        const char      ft_haystack[100] = "aaabbaaaagggdddavavavavavaaaagagaaaaaaaaaaaaaaaXXX";
        printf("lib = %s\n", strnstr(haystack, needle, 80));
        printf("cus = %s\n", ft_strnstr(ft_haystack, ft_needle, 80));
    }

    { 
        const char      needle[] = "a";
        const char      ft_needle[] = "a";
        const char      haystack[100] = "a";
        const char      ft_haystack[100] = "a";
        printf("lib = %s\n", strnstr(haystack, needle, 80));
        printf("cus = %s\n", ft_strnstr(ft_haystack, ft_needle, 80));
    }

    { 
        const char      needle[] = "a";
        const char      ft_needle[] = "a";
        const char      haystack[100] = "a";
        const char      ft_haystack[100] = "a";
        printf("lib = %s\n", strnstr(haystack, needle, 2));
        printf("cus = %s\n", ft_strnstr(ft_haystack, ft_needle, 2));
    }


    { 
        const char      needle[] = "ab";
        const char      ft_needle[] = "ab";
        const char      haystack[100] = "a";
        const char      ft_haystack[100] = "a";
        printf("lib = %s\n", strnstr(haystack, needle, 2));
        printf("cus = %s\n", ft_strnstr(ft_haystack, ft_needle, 2));
    }

    { 
        const char      needle[] = "les gens";
        const char      ft_needle[] = "les gens";
        const char      haystack[100] = "les gen les gqns les genne les gens";
        const char      ft_haystack[100] = "les gen les gqns les genne les gens";
        printf("lib = %s\n", strnstr(haystack, needle, 54));
        printf("cus = %s\n", ft_strnstr(ft_haystack, ft_needle, 54));
    }
}