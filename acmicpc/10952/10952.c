/**
 * https://www.acmicpc.net/problem/10952
 * Jiwon Park 2021 (c)
 */

/* BEGIN */
#include <stdio.h>
#define MAX 10000

int main()
{
    int a = 2021, b = 7, i;
    int result[MAX];

    for (i = 0; a + b != 0; i++)
    {
        scanf("%d %d", &a, &b);
        result[i] = a + b;
    }
    int n = i - 1;

    for (int i = 0; i < n; i++)
        printf("%d\n", result[i]);
}
/* END */

/**
 * @brief 
 * 더 생각해보기: 저장 공간을 유동적으로 관리할 수 있을까?
 * 
 */