/*
Example 1
Input:
2 4
  8  9  5 10
 12  6 14  1

Output:
BCNN = 2520
Example 2
Input:
6 12
 13  5  3  1  8 10  2 14 13 15  8 12
 10  7  7  4  7  7 15 14 14  1 12 13
 11 10  9 14 12 12 11  8 12 14 12  5
  5  6  7  3  8  3 10 10  8  8 14 12
  8  3 14 14 15  6  7  4 12 11 11 12
  5  1  5  6 15 10 11  6  4  9 10 13

Output:
BCNN = 360360
*/
#include<stdio.h>
#include<stdlib.h>
#define max 100

void NhapMang(int a[][max],int dong,int cot){
    for(int i=0;i<dong;i++)
        for (int j=0;j<cot;j++)
        scanf("%d",&a[i][j]);
}
int UCLN(int a, int b){
   while(a!=b)
    if(a>b)a=a-b;
   else b=b-a;
   return a;
}
int BCNN(int a, int b){
    return (a*b/UCLN(a,b) );}
int BCNN_Mang(int a[][max],int dong,int cot){
        int temp = BCNN(a[0][0],a[0][1] );
        for(int i=2;i<cot;i++){
            temp = BCNN(temp, a[0][i]);
        }
        for(int k=1;k<dong;k++)
            for(int l=0;l<cot;l++)
            temp=BCNN(temp, a[k][l]);
        return temp;
    }
int main(){
    int a[max][max],dong,cot;

    scanf("%d%d",&dong,&cot);
    NhapMang(a,dong,cot);
    printf("BCNN = %d",BCNN_Mang(a,dong,cot));
    return 0;
}
