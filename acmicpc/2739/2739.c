/**
 * https://www.acmicpc.net/problem/2739
 * Jiwon Park 2021 (c)
 */

/* BEGIN */
#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    for (int i = 0; i <= 9; i++)
    {
        printf("%d * %d = %d\n", n, i, n * i);
    }
}
/* END */
