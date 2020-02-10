#include <stdio.h>
#include <string.h>
#include "../ft_strrchr.c"

void    test(char *s, int c)
{
    printf("lib = %s\ncus = %s\n\n", strrchr(s, c), ft_strrchr(s, c));

}

int main()
{
    test("asddf", 'd');
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
    test("aacaacaa", 'c');
    test("aacaacaac", 'c');
    test("aacaacaaccc", 'c');
    test("x", 'x');
    test("x", 44);
    test("x", 0);
    test("x", '\0');
    test("x", 1);
}