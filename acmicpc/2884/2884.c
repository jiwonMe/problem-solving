/**
 * https://www.acmicpc.net/problem/2884
 * Jiwon Park 2021 (c)
 */

/* BEGIN */
#include <stdio.h>

void printHourMinute(int time)
{
    int h, m;
    time %= 60 * 24;
    h = time / 60;
    m = time % 60;

    printf("%d %d\n", h, m);
}

int main()
{
    int h, m;
    int userSetTime, earlySetTime;

    scanf("%d %d", &h, &m);
    userSetTime = 60 * 24 + h * 60 + m;

    earlySetTime = userSetTime - 45;

    printHourMinute(earlySetTime);
}
/* END */

/**
 * @brief 0시 30분에서 -45분을 한 것을 어떻게 계산할 것인지
 * 
 */