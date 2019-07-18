#include <stdio.h>
int main()
{
    unsigned short a, b;
    while (scanf("%hd%hd", &a, &b) != EOF)
    {
        if (a == b)
        {
            printf("YES\n");
            continue;
        }
        int equal = 0;
        for (int i = 0; i < 15; i++)
        {
            a = (a << 1) | (a >> 15);
            if (a == b)
            {
                equal = 1;
                break;
            }
        }
        if (equal == 1) printf("YES\n");
        else printf("NO\n");
    }
}