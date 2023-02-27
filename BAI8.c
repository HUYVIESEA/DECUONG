#include"stdio.h"
int main()
{
    int A,s;
    float i;
    scanf("Nhap so tien gui ban dau %d",&A);
    i=91/1000;
    while (A>=300)
    {
        A+=A*i;
        i++;
        s++;

    }
    printf("%d",s);
}