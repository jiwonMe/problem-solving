/**
 * https://www.acmicpc.net/problem/1330
 * Jiwon Park 2021 (c)
 */

/* BEGIN */
#include <stdio.h>

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);

    switch ((a > b) - (a < b))
    {
    case 1:
        printf(">");
        break;
    case 0:
        printf("==");
        break;
    case -1:
        printf("<");
    default:
        break;
    }
}
/* END */

/**
 * @brief 하나의 식으로 잘 나타낼 수 있는가
 *  ((a > b) - (a < b))
 *      a > b  :  1
 *      a == b :  0
 *      a < b  : -1
 *  '<', '=', '>' 의 아스키 코드는 각각 60, 61, 62 임.
 */