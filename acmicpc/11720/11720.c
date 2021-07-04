/**
 * https://www.acmicpc.net/problem/11720
 * Jiwon Park 2021 (c)
 */

/* BEGIN */
#include <stdio.h>

int main()
{
    int n, sum = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        int tmp;
        scanf("%1d", &tmp);
        sum += tmp;
    }
    printf("%d", sum);
}
/* END */
