/**
 * https://www.acmicpc.net/problem/2675
 * Jiwon Park 2021 (c)
 */

/* BEGIN */
#include <stdio.h>
#include <stdlib.h>
#define MAX 1000

void repeatString(int repeat, char *str)
{
    if (*str == '\0')
        return;
    for (int i = 0; i < repeat; i++)
        printf("%c", *str);
    repeatString(repeat, str + 1);
}

int main()
{
    int repeat[MAX];
    char *str[MAX];
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", repeat + i);

        str[i] = (char *)malloc(21 * sizeof(char));
        scanf("%s", str[i]);
    }

    for (int i = 0; i < n; i++)
    {
        repeatString(repeat[i], str[i]);
        puts("");
    }
}
/* END */
