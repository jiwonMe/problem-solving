/**
 * https://www.acmicpc.net/problem/1152
 * Jiwon Park 2021 (c)
 */

/* BEGIN */
#include <stdio.h>
#define MAX 1000000

int isAlphabet(char ch)
{
    return ('a' <= ch && ch <= 'z') || ('A' <= ch && ch <= 'Z');
}

int main()
{
    char str[MAX];
    int cnt = 0;
    fgets(str, MAX, stdin);

    isAlphabet(str[0]) ? cnt++ : 0;

    for (char *ptr = str; *ptr != '\0'; ptr++)
    {
        (*ptr == ' ') && isAlphabet(*(ptr + 1)) ? cnt++ : 0;
    }
    printf("%d", cnt);
}
/* END */

/**
 * @brief 단어의 앞 뒤에 공백이 오는 경우에 대한 예외처리 필요.
 * 
 */