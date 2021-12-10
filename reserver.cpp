/*
KITARR007 - Reserve

Cho hai dãy số đã được sắp xếp theo thứ tự tăng dần S và Q.

Dãy S gồm m phần tử: s0, s1, s2, ..., sm-1

Dãy Q gồm n phần tử: q0, q1, q2, ..., qn-1 

Hãy in ra (theo thứ tự tăng dần) các số thuộc dãy S mà không thuộc dãy Q. 

 

Input
Dòng 1: m, 0<m<1000;

Dòng 2: m số nguyên trên đoạn [-100, 100] được sắp xếp theo thứ tự tăng dần

Dòng 3: n, 0 < n < 1000

Dòng 4: n số nguyên trên đoạn [-100, 100] được sắp xếp theo thứ tự tăng dần

Output
Các phần tử của dãy S mà không thuộc dãy Q

 

Requirements on implementation

Trong chương trình có xây dựng và sử dụng các hàm sau:

- Hàm đọc một dãy

- Hàm giải bài tập (in theo yêu cầu) 

Example
Input:
20
-9  -8  -6  -5  -4  -3  -3  -2  -2   0   2   2   4   5   6   7   7   8   8   9
15
-6  -6  -5  -2   0   1   1   1   3   3   5   6   7   7   8

Output:
-9  -8  -4  -3  -3   2   2   4   9
*/

#include <stdio.h>
#include <math.h>

void nhapMaTran(int a[], int n)
{
    for(int i=0; i<n; i++)
        scanf("%d", &a[i]);
}

void kiemTra(int a[],int b[],int n,int m)
{
    for(int i=0; i<n; i++)
    {
        int dem=0;
        for(int j=0; j<m; j++)
            if(a[i]==b[j])
            {
                dem++;
            }
        if(dem==0)
            printf("%4d",a[i]);
    }

}
int main()
{
    int a[100],b[100];
    int n,m;
    scanf("%d",&n);
    nhapMaTran(a,n);
    scanf("%d",&m);
    nhapMaTran(b,m);
    kiemTra(a,b,n,m);
}
