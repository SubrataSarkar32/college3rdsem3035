#include<stdio.h>
#include<stdlib.h>
float fun(float x,float y)
{
    return x+y;

}
int main(void)
{
    float a,b,x,y,h,t,k;
    printf("Enter x0,y0,h,xn: ");
    scanf("%f %f %f %f",&a,&b,&h,&t);
    x=a;
    y=b;
    printf("\nx y\n");
    while(x<=t)
    {
        k=h*fun(x,y);
        y=y+k;
        x=x+h;
        printf("%0.3f %0.3f\n",x,y);
    }
    return 0;
}
