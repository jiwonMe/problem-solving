/**
 * https://www.acmicpc.net/problem/10809
 * Jiwon Park 2021 (c)
 */

/* BEGIN */
#include <stdio.h>
#include <stdlib.h>
#define MAX 100

int *get_index_array_by_alphabet(char *word)
{
    int *index_array = (int *)malloc(26 * sizeof(int));

    // initialize
    for (int i = 0; i < 26; i++)
        index_array[i] = -1;

    int index = 0;
    for (char *ptr = word; *ptr != '\0'; ptr++, index++)
    {
        if (index_array[*ptr - 'a'] == -1)
            index_array[*ptr - 'a'] = index;
    }

    return index_array;
}

int main()
{
    char *word = (char *)malloc(MAX * sizeof(char));
    scanf("%s", word);

    int *index_array = get_index_array_by_alphabet(word);
    for (int i = 0; i < 26; i++)
    {
        printf("%d ", index_array[i]);
    }
}
/* END */
