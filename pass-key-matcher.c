#include <stdio.h>
#include <unistd.h>

int pass_key_matcher(char *s1, char *s2)
{
    size_t __INDEX;

    __INDEX = 0;

    while(s1[__INDEX] || s2[__INDEX])
    {
        if (s1[__INDEX] != s2[__INDEX])
            return (-1);
        __INDEX++;
    }
    return (0);
}

int main()
{
    char *s = "khalid b";
    char *p = "khalid barkan";
    int o = pass_key_matcher(s, p);

    printf("the result : %d", o);

    return (0);
}