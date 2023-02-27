#include "stdio.h"
int main()
{
    printf("Nhap a va n\n");
    int n,i;
    float a,z,s;
    scanf("%f%d",&a,&n);
        for(i=1;i<=n;i++)
        {
            //z=i;
            s+=1/(i*a);
        }
    printf("%.2f",s);
}
