/**
 * https://www.acmicpc.net/problem/10869
 * Jiwon Park 2021 (c)
 */

/* BEGIN */
#include <stdio.h>

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d\n"
           "%d\n"
           "%d\n"
           "%d\n"
           "%d\n",
           a + b,
           a - b,
           a * b,
           a / b,
           a % b);
}
/* END */
