/*
ex1
input 200
output Nam 2000 la nam nhuan
ex2
Input:
1999
Output:
Nam 1999 khong phai la nam nhuan
*/
#include <stdio.h>
#include <stdlib.h>
#define true 1
#define false 0

int laNamNhuan(int (a))
{
    if (a%400==0)
        return true;
    else if(a%4==0&&a%100!=0)
        return true;
    return false;
}
int main()
{
    int n;
    scanf("%d",&n);
    if(laNamNhuan(n)==true)
        printf("Nam %d la nam nhuan",n);
    else printf("Nam %d khong phai la nam nhuan",n);
    return 0;
}
