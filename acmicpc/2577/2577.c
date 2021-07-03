/**
 * https://www.acmicpc.net/problem/2577
 * Jiwon Park 2021 (c)
 */

/* BEGIN */
#include <stdio.h>

int freq[10];
int main()
{
    int a, b, c;
    long long int prod;
    scanf("%d %d %d", &a, &b, &c);
    prod = a * b * c;
    while (prod)
    {
        freq[prod % 10]++;
        prod /= 10;
    }
    for (int i = 0; i < 10; i++)
    {
        printf("%d\n", freq[i]);
    }
}
/* END */
