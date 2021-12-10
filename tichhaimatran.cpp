/*
Example
Input:
3 2 4
 -92    99
  51   -85
 -48   -75

 -27   -46    43   -52
   8   -66    45   -94

Output:
  3276 -2302   499 -4522
 -2057  3264 -1632  5338
   696  7158 -5439  9546 
*/
#include <stdio.h>
#include <stdlib.h>

void nhapMaTran(int a[][100],int dong,int cot)
{
    for(int i=0; i<dong; i++)
        for(int j=0; j<cot; j++)
            scanf("%d",&a[i][j]);
}
void xuatMaTran(int a[][100],int dong,int cot)
{
    for(int i=0; i<dong; i++)
    {
        for(int j=0; j<cot; j++)
           {
               printf("%6d",a[i][j]);
    }
    printf("\n");}
}
void tichMaTran(int a[][100],int b[][100],int c[][100],int dong,int chung,int cot)
{
    for(int i=0; i<dong; i++)
        for(int j=0; j<cot; j++)
        {
            c[i][j]=0;
            for(int k=0; k<chung; k++ )
                c[i][j]+=a[i][k]*b[k][j];
        }
}
int main()
{
    int a[100][100],b[100][100],c[100][100];
    int dong,cot,chung;
    scanf("%d%d%d",&dong,&chung,&cot);
    nhapMaTran(a,dong,chung);
    nhapMaTran(b,chung,cot);
    tichMaTran( a, b, c, dong, chung, cot);
    xuatMaTran(c,dong,cot);
    return 0;
}
