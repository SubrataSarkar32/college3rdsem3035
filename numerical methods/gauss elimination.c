#include<stdio.h>
int main(void)
{
    float a [20][20],ratio,x[20];
    int i,j,k,n;
    printf("Enter the order of the matrix\n");
    scanf("%d",&n);
    printf("Enter the coefficient and RHS:");
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=(n+1);j++)
        {
            scanf("%f",&a[i][j]);
        }
        printf("\n");
    }
    for(k=1;k<=(n-1);k++)
    {
        for(i=(k+1);i<=n;i++)
        {
            ratio=a[i][k]/a[k][k];
            for(j=1;j<=(n+1);j++)
            {
                a[i][j]=a[i][j]-ratio*a[k][j];
            }
        }
    }
    x[n]=a[n][n+1]/a[n][n];
    for(k=(n-1);k>=1;k--)
    {
        x[k]=a[k][n+1];
        for(j=(k+1);j<=n;j++)
        {
            x[k]=x[k]-(a[k][j]*x[j]);
        }
        x[k]=x[k]/a[k][k];
    }
    for(i=1;i<=n;i++)
    {
        printf("\nx(%d)=%g",i,x[i]);
    }
    return 0;
}
