/**
 * https://www.acmicpc.net/problem/1018
 * Jiwon Park 2021 (c)
 */

/* BEGIN */
#include <stdio.h>
#include <stdlib.h>

int count_in_8x8(char** board, int p, int q) {
    int count = 0;
    for (int i = 0; i < 8; i++)
        for (int j = 0; j < 8; j++) 
            if((i+j)%2==1 && board[p+i][q+j]=='W') count++;
            else if((i+j)%2==0 && board[p+i][q+j]!='W') count++;
    if (count > 32) count = 64 - count;
    return count;
}


int** pool(char** board, int n, int m) {
    int** result = (int**)malloc(sizeof(int*) * (n-7));
    for (int i = 0; i < n - 7; i++) {
        result[i] = (int*)malloc(sizeof(int) * (m-7));
        for (int j = 0; j < m - 7; j++) {
            result[i][j] = count_in_8x8(board, i, j);
        }
    }
    return result;
}

int find_min(int** array2D, int n, int m) {
    int min = array2D[0][0];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (array2D[i][j] < min) {
                min = array2D[i][j];
            }
        }
    }
    return min;
}

int get_ans(char** board, int n, int m) {
    return find_min(pool(board, n, m), n - 7, m - 7);
}

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    char** M = (char**)malloc(sizeof(char*) * n);
    for (int i = 0; i < n; i++){
        M[i] = (char*)malloc(sizeof(char) * m);
        scanf("%s", M[i]);
    }

    int ans = get_ans(M, n, m);
    printf("%d", ans);
}
/* END */
