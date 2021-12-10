/*
ex1
Input:
2 9 1945

Output:
Ngay hien tai: 2/9/1945
Ngay truoc do: 1/9/1945

*/
#include <stdio.h>
#include <stdlib.h>
#define true 1
#define false 0

int main()
{
    int d,m,y;
    int ngaythanghople=true;
    scanf("%d%d%d",&d,&m,&y);
    printf("Ngay hien tai: %d/%d/%d\n",d,m,y);
    d--;
    if (d<=0||d>31||m<=0||m>12||y==0)
        ngaythanghople=false;
    if (m==2)
    {
        if (y%4==0&&y%100!=0)
        {
            if (d>29)
                ngaythanghople=false;
            else if (d>28)
                ngaythanghople=false;
        }
    }
    else if (m==1||m==3||m==5||m==7||m==8||m==10||m==12)
        if(d>31)
            ngaythanghople=false;
        else if (m==4||m==6||m==9||m==11)
            if(d>30)
                ngaythanghople=false;
    if(ngaythanghople==false)
    {
        m--;
        if (m==0)
        {
          y--;
          m=12;
        }
        if(m==2)

        {
            if(y%4==0&&y%100!=0)
                d=29;
            else d=28;
        }
        else if (m==1||m==3||m==5||m==7||m==8||m==10||m==12)
            d=31;
        else d=30;
    }

    printf("Ngay truoc do: %d/%d/%d",d,m,y);

}
