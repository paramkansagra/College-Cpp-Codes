#include <stdio.h>
#include <stdlib.h>

int main()
{

    int n;
    printf("input n ");
    scanf("%d", &n);

    int arr[n][4];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    for (int i = 1; i < n; i++)
    {
        if (arr[i][3] > arr[i - 1][3])
        {
            printf("%d/%d/%d \n", arr[i][0], arr[i][1], arr[i][2]);
        }
    }

    return 0;
}