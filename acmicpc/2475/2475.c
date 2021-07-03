/**
 * https://www.acmicpc.net/problem/2475
 * Jiwon Park 2021 (c)
 */

/* BEGIN */
#include <stdio.h>

int main()
{
    int squareSum = 0;
    for (int i = 0; i < 5; i++)
    {
        int x;
        scanf("%1d", &x);
        squareSum += x * x;
    }
    printf("%d", squareSum % 10);
}
/* END */
