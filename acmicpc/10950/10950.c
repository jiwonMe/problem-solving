/**
 * https://www.acmicpc.net/problem/10950
 * Jiwon Park 2021 (c)
 */

/* BEGIN */
#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    int result[t];
    for (int i = 0; i < t; i++)
    {
        int a, b;
        scanf("%d %d", &a, &b);
        result[i] = a + b;
    }
    for (int i = 0; i < t; i++)
        printf("%d\n", result[i]);
}
/* END */
