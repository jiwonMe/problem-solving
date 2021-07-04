/**
 * https://www.acmicpc.net/problem/10818
 * Jiwon Park 2021 (c)
 */

/* BEGIN */
#include <stdio.h>

int get_min(int nums[], int len)
{
    int min = nums[0];
    for (int i = 0; i < len; i++)
    {
        if (min > nums[i])
            min = nums[i];
    }
    return min;
}

int get_max(int nums[], int len)
{
    int max = nums[0];
    for (int i = 0; i < len; i++)
    {
        if (max < nums[i])
            max = nums[i];
    }
    return max;
}

int main()
{
    int n;
    scanf("%d", &n);

    int nums[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", nums + i);
    }

    printf("%d %d", get_min(nums, n), get_max(nums, n));
}
/* END */
