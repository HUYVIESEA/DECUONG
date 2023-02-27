#include"stdio.h"
int main()
{
    int i,j,k;
        for(i=0;i<=2;i++)
            for(j=0;j<=3;j++)
                for(k=0;k<=6;k++)
                    if((i*200)+(j*100)+(k*50)==300)
                    {
                        printf("quy doi duoc %d, nghin, %d nghin, %d nghin\n",i,j,k);
                        //printf("%d %d %d",i,j,k);
                    }

}