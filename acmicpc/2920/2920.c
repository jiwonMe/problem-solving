/**
 * https://www.acmicpc.net/problem/2920
 * Jiwon Park 2021 (c)
 */

/* BEGIN */
#include <stdio.h>

char *get_order_type(int notes[])
{
    int diff = notes[1] - notes[0];

    for (int i = 0; i < 7; i++)
    {
        if (diff == notes[i + 1] - notes[i])
            continue;
        else
            return "mixed";
    }

    if (diff == 1)
        return "ascending";
    else
        return "descending";
}

int main()
{
    int notes[8];
    for (int i = 0; i < 8; i++)
    {
        scanf("%d", notes + i);
    }

    printf(get_order_type(notes));
}
/* END */

/**
 * @brief continue의 사용법과 printf는 어떤 것을 인자로 받는가
 * 
 */