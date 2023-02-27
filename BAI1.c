#include "stdio.h"
int main()
{
    unsigned n;
    printf("Nhap so nguyen duong\n");
    scanf("%d",&n);
    if (100<=n && n<=999)
    {
        printf("So hang tram = %d\n",n/100);
        printf("So hang chuc = %d\n",(n%100)/10);
        printf("So hang do vi = %d\n",(n%100)%10);
    }
    else
        printf("Error");
}