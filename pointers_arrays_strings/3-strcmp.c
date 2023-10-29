#include "main.h"

int _strcmp(char *s1, char *s2)
{
    while (*s1 != '\n' && *s2 != '\n' && (*s1 == *s2))
    {
        s1++;
        s2++;
    }
    return (*s1 - *s2);
}
