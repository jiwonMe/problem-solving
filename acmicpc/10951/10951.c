/**
 * https://www.acmicpc.net/problem/10951
 * Jiwon Park 2021 (c)
 */

/* BEGIN */
#include <stdio.h>

int main()
{
    int a, b;
    while (scanf("%d %d", &a, &b) != EOF)
    {
        printf("%d\n", a + b);
    }
}
/* END */

/**
 * @brief 
 * C언어에서 scanf는 입력의 마지막에서 EOF를 반환한다.
 * https://www.cplusplus.com/reference/cstdio/scanf/
 */
