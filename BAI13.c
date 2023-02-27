#include"stdio.h"
int main(void) {
    printf("Nhap phan tu mang\n");
    int i, n;
    scanf("%d", &n);
    int a[n];
    //
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    for (i = 0; i < n; i++)
        printf("%d ", a[i]);
    //
    printf("\n nhap x=");
    int x;
    scanf("%d", &x);
        for(i=0;i<n;i++)
            if(x<=a[i])
            {
                int temp=x;
                a[i]=x;
                x=temp;
            }
    for(i=0;i<n;i++)
        printf("%d ",a[i]);
    printf("%d",x);
}