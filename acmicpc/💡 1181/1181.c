/**
 * https://www.acmicpc.net/problem/1181
 * Jiwon Park 2021 (c)
 */

/* BEGIN */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// sort by dictionary order
char** quicksort(const char** dictionary, int n) {
    char** result = (char**)malloc(sizeof(char*) * n);

    for (int i = 0; i < n; i++) {
        result[i] = (char*)malloc(sizeof(char) * (strlen(dictionary[i]) + 1));
        strcpy(result[i], dictionary[i]);
    }

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (strlen(result[i]) > strlen(result[j])) {
                char* temp = result[i];
                result[i] = result[j];
                result[j] = temp;
            } else if (strlen(result[i]) == strlen(result[j])) {
                if (strcmp(result[i], result[j]) > 0) {
                    char* temp = result[i];
                    result[i] = result[j];
                    result[j] = temp;
                }
            }
        }
    }
    
    return result;
}

char** removeDuplicate(char** dictionary, int n) {
    char** result = (char**)malloc(sizeof(char*) * n);
    int count = 0;
    for (int i = 0; i < n; i++) {
        int isDuplicate = 0;
        for (int j = 0; j < count; j++) {
            if (strcmp(dictionary[i], result[j]) == 0) {
                isDuplicate = 1;
                break;
            }
        }
        if (!isDuplicate) {
            result[count] = (char*)malloc(sizeof(char) * (strlen(dictionary[i]) + 1));
            strcpy(result[count], dictionary[i]);
            count++;
        }
    }

    return result;
}

int main()
{
    int n;
    scanf("%d", &n);
    char** table = (char**)malloc(sizeof(char*) * n);
    for (int i = 0; i < n; i++){
        table[i] = (char*)malloc(sizeof(char) * 51);
        scanf("%s", table[i]);
    }

    char** dictionary = removeDuplicate(sort(table, n), n);

    // print
    for (int i = 0; i < n; i++) {
        if (dictionary[i] != NULL) {
            printf("%s\n", dictionary[i]);
        }
    }

}
/* END */

