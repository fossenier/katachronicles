#include <inttypes.h>
#include <stdio.h>
#include <string.h>

uint64_t descendingOrder(uint64_t n)
{
    char s[20];
    sprintf(s, "%llu", n);

    int l = strlen(s);
    for (int i = 0; i < l - 1; i++)
    {
        for (int j = 0; j < l - i - 1; j++)
        {
            if (s[j] < s[j + 1])
            {
                char t = s[j];
                s[j] = s[j + 1];
                s[j + 1] = t;
            }
        }
    }
    uint64_t r = 0;
    sscanf(s, "%llu", &r);
    return r;
}