#include<stdio.h>
int main(void)
{
    float ax[20],p[20],y[20],x,fy;
    int i,n,k;
    printf("Enter range\n");
    scanf("%d",&n);
    printf("Enter the value of X\n");
    scanf("%f",&x);
    getchar();
    printf("Enter the values of X[i]\n");
    for (i=0;i<n;i++)
    {
        scanf("%f",&ax[i]);
        getchar();
    }
    printf("Enter the value of Y\n");
    for(k=0;k<n;k++)
    {
        scanf("%f",&y[k]);
        getchar();
    }
    for(k=0;k<n;k++)
    {
        p[k]=1.0;
        for (i=0;i<n;i++)
        {
            if(i==k)
            {
                continue;
            }
            p[k]=p[k]*(x-ax[i])/(ax[k]-ax[i]);
        }
    }
    for(i=0;i<n;i++)
    {
        fy=fy+(p[i]*y[i]);
    }
    printf("\nThe value at %f is %f",x,fy);
    return 0;
}
