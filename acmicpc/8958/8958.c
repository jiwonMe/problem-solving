/**
 * https://www.acmicpc.net/problem/8958
 * Jiwon Park 2021 (c)
 */

/* BEGIN */
#include <stdio.h>
#include <stdlib.h>
#define MAX 80

int get_score_OX_quiz(char *string)
{
    int score = 0;
    int bonus = 0;
    for (char *ptr = string; *ptr != '\0'; ptr++)
    {
        if (*ptr == 'O')
        {
            score += bonus + 1;
            bonus++;
        }
        else if (*ptr == 'X')
        {
            bonus = 0;
        }
    }
    return score;
}

int main()
{
    int n;
    scanf("%d", &n);

    char **test_cases = (char **)malloc(n * sizeof(char *));

    for (int i = 0; i < n; i++)
    {
        test_cases[i] = (char *)malloc(MAX * sizeof(char));
        scanf("%s", test_cases[i]);
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d\n", get_score_OX_quiz(test_cases[i]));
    }
}
/* END */
