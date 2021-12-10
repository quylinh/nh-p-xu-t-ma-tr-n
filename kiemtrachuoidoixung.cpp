/*
Kiểm tra chuỗi đối xứng

Một chuỗi được gọi là đối xứng nếu khi đảo ngược trật tự của chuỗi này thì ta được chính chuỗi đó.

 

Input
Dòng 1: t - số lượng testcase, t < 20

t dòng tiếp theo: mỗi dòng chứa một chuỗi ký tự, độ dài không quá 1000

Output
"Symmetric" nếu chuỗi là đối xứng

"Asymmetric" nếu chuỗi không đối xứng.

Lưu ý: không phân biệt chữ hoa, chữ thường.
example
Input:
2
Nguyen Trai
Aha

Output:
Asymmetric không đối xứng
Symmetric đối xứng

*/
#include <stdio.h>
#include <string.h>
#define true 1
#define false 0
#define MAX 500

void doiHoaThanhThuong(char str[])
{
    int n=strlen(str);
    for(int i=0; i<n; i++)
        if(str[i]>=65&&str[i]<=90)
            str[i]=str[i]+32;
}
int kiemTra(char str[])
{
    int len=strlen(str);
    for(int i=0; i<len/2; i++)
        if(str[i]!=str[len-i-1])
            return 0;
    return 1;
}
int main()
{
    char str[MAX];
    int t;
    scanf("%d",&t);
    getchar();
    while(t--)
    {
        gets(str);
        doiHoaThanhThuong(str);
        if(kiemTra(str)==1)
            printf("Symmetric\n");
        else printf("Asymmetric\n");
    }
}
