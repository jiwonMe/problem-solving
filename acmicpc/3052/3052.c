/**
 * https://www.acmicpc.net/problem/3052
 * Jiwon Park 2021 (c)
 */

/* BEGIN */
#include <stdio.h>
#define LEN 10

int get_variety_of_reminders(int nums[], int len, int divider)
{
    int variety = 0;
    int reminders[divider];

    //initialize
    for (int i = 0; i < divider; i++)
        reminders[i] = 0;

    for (int i = 0; i < len; i++)
    {
        reminders[nums[i] % divider] ? 0 : variety++;
        reminders[nums[i] % divider]++;
    }

    return variety;
}

int main()
{
    int nums[LEN];
    for (int i = 0; i < LEN; i++)
    {
        scanf("%d", nums + i);
    }

    printf("%d", get_variety_of_reminders(nums, LEN, 42));
}
/* END */
