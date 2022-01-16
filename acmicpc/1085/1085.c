/**
 * https://www.acmicpc.net/problem/1085
 * Jiwon Park 2021 (c)
 */

/* BEGIN */
#include <stdio.h>
#define min(a, b) (a < b ? a : b)

int main()
{
    int x, y, w, h;
    scanf("%d %d %d %d", &x, &y, &w, &h);
    
    int ans = min(min(w - x, h - y), min(x, y));
    printf("%d", ans);
}
/* END */

