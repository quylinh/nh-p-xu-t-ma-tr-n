/*
Example1
Input:
1 1 2000

Output:
Ngay 1/1 la ngay thu 1 cua nam 2000
Example2
Input:
2 9 1945

Output:
Ngay 2/9 la ngay thu 245 cua nam 1945
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int d,m,y,songay;
    scanf("%d%d%d",&d,&m,&y);
    if (m==1)
        songay=d;
    else if (m==2)
        songay=31+d;
    else if (m==3)
        songay=31+28+d;
    else if (m==4)
        songay=31+28+31+d;
    else if (m==5)
        songay=31+28+31+30+d;
    else if (m==6)
        songay=31+28+31+30+31+d;
    else if (m==7)
        songay=31+28+31+30+31+30+d;
    else if (m==8)
        songay=31+28+31+30+31+30+31+d;
    else if (m==9)
        songay=31+28+31+30+31+30+31+31+d;
    else if (m==10)
        songay=31+28+31+30+31+30+31+31+30+d;
    else if (m==11)
        songay=31+28+31+30+31+30+31+31+30+31+d;
    else
        songay=31+28+31+30+31+30+31+31+30+31+30+d;
    if (m>2)
    	if (y%4==0&&y%100!=0)
        songay += 1;
    printf("Ngay %d/%d la ngay thu %d cua nam %d",d,m,songay,y);
    return 0;
}
