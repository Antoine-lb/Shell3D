#include <stdio.h>
#include <string.h>
#include <stddef.h>

#include "../ft_strncmp.c"

void    test(char *s, char *c,  size_t n)
{
    printf("lib = %d\ncus = %d\n\n", strncmp(s, c, n), ft_strncmp(s, c, n));
}

int main()
{
    test("asddf", "asdcdf", 3);
    test("", "asdcdf", 3);
    test("asddf", "", 3);
    test("", "", 0);
    test("", "", 1000);
    test("a", "", 100);
    test("", "b", 100);
    test("a", "a", 100);
    test("a", "a", 0);
    test("a", "ab", 0);
    test("a", "ab", 10);
    test("ab", "ab", 10);
    test("ab", " ab", 10);
    test("ab", " ab", 1);
    test("asdfasdf", " asdfvasdfasdasdfascsdcasdfas", 100);
    test("asdfasdf", " asdfvasdfasdasdfascsdcasdfas", 5);
    test("qwer", " asdf", 5);
    test("abcdefgh", "", 0);
    test("test\200", "test\0", 6);
}
