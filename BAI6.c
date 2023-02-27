#include"stdio.h"
/* a=500k
 * b=200
 * c=200
 * d=50*/
int main()
{
    printf("Nhap menh gia can quy doi\n");
    int i,j,k,z,n,s;
    scanf("%d",&n);
        for(i=0;i<(n/500000);i++)
            for(j=0;i<=(n/200000);j++)
                for(k=0;k<=(n/100000);k++)
                    for(z=0;z<=(n/50000);z++) {
                        printf("%d * 500k + %d * 200k + %d * 100k + %d * 50k\n", i, j, k, z);
                        s += 1;
                    }
    return 0;
}
