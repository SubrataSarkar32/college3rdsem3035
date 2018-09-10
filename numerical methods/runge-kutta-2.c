#include<stdio.h>
#include<stdlib.h>
#include<math.h>
float F(float x,float y)
{
    return (1+(y*y));
}
int main(void)
{
    float x0,y0,k1,k2,k3,k4,h,n,f,y1,f1;
    printf("Enter value of x0, y0,h,n: ");
    scanf("%f %f %f %f",&x0,&y0,&h,&n);
    while(x0<n)
    {
        f=F(x0,y0);
        k1=h*f;
        f1=F((x0+h),(y0+k1));
        k2=h*f1;
        y1 = y0+((k1+k2)/2);
        printf("\nk1=%f",k1);
        printf("\nk2=%f",k2);
        printf("\ny(%.4f)=%.3f",x0+h,y1);
        y0=y1;
        x0=x0+h;
    }

}
