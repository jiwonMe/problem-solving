/**
 * https://www.acmicpc.net/problem/9498
 * Jiwon Park 2021 (c)
 */

/* BEGIN */
#include <stdio.h>

char get_grade(int score)
{
    switch (score / 10)
    {
    case 9:
    case 10:
        return 'A';
    case 8:
        return 'B';
    case 7:
        return 'C';
    case 6:
        return 'D';
    default:
        return 'F';
    }
}

int main()
{
    int score;
    scanf("%d", &score);

    printf("%c", get_grade(score));
}
/* END */
