#include<stdio.h>
#include<stdlib.h>
#include<math.h>
float fun(float);
int main(void)
{
	float x0,x1,x2,f0,f1,f2,e;
	int i=1;
	printf("Enter the value of X0\n");
	scanf("%f",&x0);
	printf("Enter the value of x1\n");
	scanf("%f",&x1);
	printf("Enter the value of error:");
	scanf("%f",&e);
	do{
		f0=fun(x0);
		f1=fun(x1);
		if(f0*f1>0)
		{
			exit(0);
		}
		x2=x0-((f0*(x1-x0))/(f1-f0));
		f2=fun(x2);
		if(f0*f2>0)
		{
			x0=x2;
		}
		else
		{
			x1=x2;
		}
		i++;
	}while(fabs(fun(x2))>e);
	printf("The root is %f",x2);
	printf("\nValue is %f",f2);
	printf("\n No. of iteration=%d",i-1);
	return 0;
}
float fun(float x)
{
	return((x*x*x)-(2*x)-5);
}
