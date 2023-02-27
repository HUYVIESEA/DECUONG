#include"stdio.h"
main()
{
    unsigned n;
    int i,z=1;
    printf("Nhap so nguyen duong\n");
    scanf("%d",&n);
    printf("Giai thua cua %d =\n",n);
        for(i=1;i<=n;i++)
            z*=i;
        printf("%d",z);
}