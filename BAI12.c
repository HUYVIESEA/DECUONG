#include"stdio.h"
int main(void)
{
    printf("Nhap phan tu mang\n");
    int i,n;
    scanf("%d",&n);
    int a[n];
    //
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=0;i<n;i++)
        printf("%d ",a[i]);
    //
    printf("\n");
    int le,chan,k;
    for(i=0;i<n;i++)
        if(a[i]%2==0)
            le+=a[i];
        else
        {
            chan+=a[i];
            k++;
        }
    float z=chan/k;
    printf("%d\n",le);
    printf("%.2f\n",z);
    //
    printf("\n");
    for(i=0;i<n;i++)
        a[i]*=a[i];
    for(i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                int temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    //
    for(i=0;i<n;i++)
        printf("%d ",a[i]);
}
