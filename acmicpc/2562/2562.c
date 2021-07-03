/**
 * https://www.acmicpc.net/problem/2562
 * Jiwon Park 2021 (c)
 */

/* BEGIN */
#include <stdio.h>

int main()
{
    int max = 0;
    int maxIndex = 0;
    for (int i = 1; i < 10; i++)
    {
        int tmp;
        scanf("%d", &tmp);
        if (max < tmp)
        {
            max = tmp;
            maxIndex = i;
        }
    }
    printf("%d\n%d\n", max, maxIndex);
}
/* END */
