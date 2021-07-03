/**
 * https://www.acmicpc.net/problem/2438
 * Jiwon Park 2021 (c)
 */

/* BEGIN */
#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("*");
        }
        puts("");
    }
}
/* END */

/**
 * @brief 별찍기
 * > codegolf 도전
 * 
 */