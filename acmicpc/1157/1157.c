/**
 * https://www.acmicpc.net/problem/1157
 * Jiwon Park 2021 (c)
 */

/* BEGIN */
#include <stdio.h>
#define MAX 1000000

int freq[26]; // A-Z : 26 alphabets

void upper(char *str)
{
    if (*str == '\n')
        *str = '\0';
    if (*str == '\0')
        return;
    if ('a' <= *str && *str <= 'z')
    {
        *str += ('A' - 'a');
    }
    upper(1 + str);
}

int main()
{
    char str[MAX];
    fgets(str, MAX, stdin);

    //change all characters to upper case.
    upper(str);

    for (char *ptr = str; *ptr != '\0'; ptr++)
    {
        freq[*ptr - 'A']++;
    }

    int mostLT = 0;
    int mostLE = 0;
    for (int i = 0; i < 26; i++)
    {
        if (freq[mostLT] < freq[i])
            mostLT = i;
        if (freq[mostLE] <= freq[i])
            mostLE = i;
    }
    printf("%c", mostLT == mostLE ? mostLT + 'A' : '?');
}
/* END */

/**
 * @brief
 * - 대소문자 구분 안함
 * - fgets는 \n까지 다 입력으로 받는다. 즉 \n\0 형태로 문자열이 끝나게 됨.
 * - multiMost를 어떻게 찾을 것인지 고민.
 *      1. 한 바퀴 다 돌면서 most를 찾고 같은 값이 있는지 다시 한 바퀴 돈다.
 *      2. '<'로 얻은 값과 '<='로 얻은 값이 같은지 비교한다. (채택)
 *      3. multiMost flag를 하나 만든다.
 */