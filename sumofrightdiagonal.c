#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int a, b;
    scanf("%d %d", &a, &b);
    int arr[a][b];
    int res = 0;
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < a; j++)
        {
            if (i == j)
            {
                res += arr[i][j];
            }
        }
    }
    printf("%d\n", res);
    res = 0;
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            if (i + j == a - 1)
            {
                res += arr[i][j];
            }
        }
    }
    printf("%d", res);
}