#include"stdio.h"
int main()
{
    int i,n,s;
    printf("Nhap n\n");
    scanf("%d",&n);
    for(i=1;i<=n;i+=2)
        s+=i;
    printf("%d",s);
}