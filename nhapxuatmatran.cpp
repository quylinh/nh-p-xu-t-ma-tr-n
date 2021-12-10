#include <stdio.h>
#include <stdlib.h>
void nhapMang(int a[][100], int n)
{
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &a[i][j]);
}
void xuatMang(int a[][100], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
}
int main()
{
    int a[100][100], n;
    scanf("%d", &n);
    nhapMang(a, n);
    xuatMang(a, n);}
    