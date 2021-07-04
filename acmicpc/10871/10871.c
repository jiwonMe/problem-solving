/**
 * https://www.acmicpc.net/problem/10871
 * Jiwon Park 2021 (c)
 */

/* BEGIN */
#include <stdio.h>

int main()
{
    int n, x;
    scanf("%d %d", &n, &x);
    int nums[n];
    for (int i = 0; i < n; i++)
        scanf("%d", nums + i);

    for (int i = 0; i < n; i++)
        nums[i] < x ? printf("%d ", nums[i]) : 0;
}
/* END */
