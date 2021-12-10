/*
Example
Input:
19
342 -824 980 -194 150 -979 614 472 197 477 228 -679 -351 932 33 -397 101 546 -311 
5

Output:
   342  -824   980  -194   150
  -979   614   472   197   477
   228  -679  -351   932    33
  -397   101   546  -311
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void nhapmang(int a[],int n)
{
    for(int i=0; i<n; i++)
        scanf("%d",&a[i]);
}
void xuatmang(int a[],int n,int r)
{
    for(int i=0; i<n; i++)
    {
        if ((i+1)%r==0)
            printf("%6d\n",a[i]);
        else printf("%6d",a[i]);
    }
}
int main()
{
    int n,r;
    int a[100];
    scanf("%d",&n);
    nhapmang(a,n);
    scanf("%d",&r);
    xuatmang(a,n,r);
}
