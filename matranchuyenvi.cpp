/*
ex1 
Input:
3 5
81 23 25 96 67
42 43 -3 -34 -26
-90 5 -37 -6 -5

Output:
  81  42 -90
  23  43   5
  25  -3 -37
  96 -34  -6
  67 -26  -5 
*/
#include <stdio.h>
#include <math.h>

void nhapMaTran(int a[][100], int dong, int cot)
{
    for(int i=0; i<dong; i++)
        for(int j=0; j<cot; j++)
            scanf("%d", &a[i][j]);

}

void timMaTranChuyenVi(int a[][100], int b[][100], int dong, int cot)
{

    int k = cot;
    int l = dong;
    for(int i=0; i<k; i++)
    {
        for(int j=0; j<l; j++)
        {
            b[i][j]= a[j][i];
        }
    }
    for(int i=0; i<k; i++)
    {
        for(int j=0; j<l; j++)
        {
            printf("%4d", b[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    int a[100][100],b[100][100];
    int dong,cot;
    scanf("%d%d",&dong,&cot);
    nhapMaTran(a, dong, cot);
    timMaTranChuyenVi(a,b, dong, cot);

}
