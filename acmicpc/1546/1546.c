/**
 * https://www.acmicpc.net/problem/1546
 * Jiwon Park 2021 (c)
 */

/* BEGIN */
#include <stdio.h>
#include <stdlib.h>
#define MAX 1000

int main()
{
    int n;
    int maxScore = 0;
    int sum = 0;
    scanf("%d", &n);
    int *scores = (int *)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++)
    {
        scanf("%d", scores + i);

        //find maxScore
        if (maxScore < scores[i])
            maxScore = scores[i];

        //calculate sum
        sum += scores[i];
    }

    printf("%f", (float)sum / n / maxScore * 100);
}
/* END */
/**
 * @brief normalization
 * 
 */