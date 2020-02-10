#include <stdio.h>
#include <string.h>
#include "../ft_strchr.c"

void    test(char *s, int c)
{
    printf("lib = %s\ncus = %s\n\n", strchr(s, c), ft_strchr(s, c));

}

int main()
{
 
    test("asdf", 'd');
    test("", 'd');
    test("asdf", '0');
    test("", 'e');
    test("a", 't');
    test("aa", 'a');
    test("a", 'a');
    test("ba", 'a');
    test("ab", 'a');
    test("aba", 'a');
    test("abaaaa", 'a');
    test("abaaaa", 'b');
    test("abaaxxxaa", 'b');
    test("abaaxxxaa", 'x');
    test("abaaxxxaac", 'c');
    test("x", '\0');
}