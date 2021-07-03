/**
 * https://www.acmicpc.net/problem/1008
 * Jiwon Park 2021 (c)
 */

/* BEGIN */
#include <stdio.h>

int main()
{
    double a, b;
    scanf("%lf %lf", &a, &b);
    printf("%.32lf", (a / b));
}
/* END */

/**
 * @brief 문제에서 요구하는 정밀도가 $10^{-9}$ 이므로 float로는 만족하지 못함.
 * 
 */