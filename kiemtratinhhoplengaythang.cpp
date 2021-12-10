/*
ex1
input 22 11 3333
output 22/11/3333: hop le
ex 2
input 29 2 3333
output 29/2/3333: khong hop le

*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define true 1
#define false 0

int main()
{
    int ngaythanghople=true;
    int ngay,thang,nam;
    int namnhuan=false;
    scanf("%d%d%d",&ngay,&thang,&nam);
    if (ngay<=0||ngay>31||thang<=0||thang>12||nam==0)
        ngaythanghople=false;
    if (thang==2)
        if (nam%4==0 && nam%100!=0)
            namnhuan=true;
    if (namnhuan==true)
        if (ngay>29)
            ngaythanghople=false;
    if (namnhuan==false)
        if (ngay>28)
            ngaythanghople=false;
    if (ngaythanghople)
        printf("%d/%d/%d: hop le",ngay,thang,nam);
    else
        printf("%d/%d/%d: khong hop le",ngay,thang,nam);
    return 0;
}
