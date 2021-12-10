/*
Kiểm tra tính đối xứng của mảng một chiều

Một mảng số nguyên A có độ dài LEN được coi là đối xứng nếu thỏa mãn A[i] = A[LEN-i-1] với mọi i: 0 <= i < LEN/2.
Ví dụ 1:  1 2 3 4 4 3 2 1
Ví dụ 2:  1 2 3 4 5 4 3 2 1
 

Input
Dòng 1: số nguyên dương t - số lượng các testcase

t  dòng tiếp theo: mỗi dòng là một dãy các số nguyên phân tách bởi dấu cách, là các phần tử của một mảng, kết thúc bằng số 0 (số 0 không là phần tử của mảng). Số lượng phần tử của mảng không vượt quá 10000.

Output
Với mỗi testcase, nếu mảng là đối xứng thì in ra SYMMETRIC, còn nếu không thì in ra ASYMMETRIC.

Implementation Requirements
Chương trình cần sử dụng mảng để chứa n số nguyên đã cho trong mỗi testcase
Chương trình cần có một hàm để đọc giá trị vào mảng và xác định kích thước thực sự của mảng.
Chương trình cần có một hàm để kiểm tra tính đối xứng của mảng
Lưu ý: Hệ thống SPOJ không có khả năng kiểm tra xem các yêu cầu về cài đặt có được tuân thủ hay không. Người làm bài tập này cần tự giác tuân thủ yêu cầu này. 
Example
Input:
3
519 942 445 963 527 730 749 119 241 810 858 210 621 989 0 
321 135 527 383 159 406 478 568 578 150 864 779 555 431 459 151 576 271 0 
140 191 527 191 140 0 


Output:
Testcase 0: Asymmetric
Testcase 1: Asymmetric
Testcase 2: Symmetric
*/
#include <stdio.h>
#include <stdlib.h>
#define true 1
#define false 0
void nhapMang(int a[])
{
    int dem=0;
    do
    {
        scanf("%d",&a[dem]);
        dem++;
    }
    while(a[dem-1]!=0);
}
int kichThuoc(int a[])
{
    int k=0;
    while(a[k]!=0)
        k++;
    return k--;
}
int kiemTra(int a[])
{
    int len=kichThuoc(a);
    for(int i=0; i<len/2; i++)
        if(a[i]!=a[len-i-1])
            return false;
    return true;

}

int main()
{
    int a[100],t;
    scanf("%d",&t);
    for(int j=0; j<t; j++)
    {
        nhapMang(a);
        kichThuoc(a);
        if(kiemTra(a)==true)
            printf("Testcase %d: Symmetric\n",j);
            else printf("Testcase %d: Asymmetric\n",j);
            }
    return 0;
}
