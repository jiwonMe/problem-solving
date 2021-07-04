/**
 * https://www.acmicpc.net/problem/2908
 * Jiwon Park 2021 (c)
 */

/* BEGIN */
#include <stdio.h>
#define MAX(X, Y) (X) > (Y) ? (X) : (Y)

//invert abc to cba
int invert3(int n)
{
    int digit[3];
    for (int i = 0; i < 3; i++)
    {
        digit[i] = n % 10;
        n /= 10;
    }
    return 100 * digit[0] + 10 * digit[1] + digit[2];
}

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);

    a = invert3(a);
    b = invert3(b);

    printf("%d", MAX(a, b));
}
/* END */

/**
 * @brief 아스키코드상으로도 0123456789는 크기 변함없음
 * 
 */