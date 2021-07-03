/**
 * https://www.acmicpc.net/problem/2753
 * Jiwon Park 2021 (c)
 */

/* BEGIN */
#include <stdio.h>

int isLeapYear(int year)
{
    return ((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0) ? 1 : 0;
}

int main()
{
    int year;
    scanf("%d", &year);
    printf("%d", isLeapYear(year));
}
/* END */
