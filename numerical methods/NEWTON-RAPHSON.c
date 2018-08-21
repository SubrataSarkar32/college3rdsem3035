#include<stdio.h>
#include<conio.h>
#include<math.h>
#define f(x) x*x-4*x-10
#define df(x) 2*x-4
#define E 0.0005
int main()
{
	float x0,x1,f0,fd0,e;
	printf ("\t\t\t----NEWTON-RAPHSON METHOD----");
	printf ("\n\nfunction in use::x^2-4*x-10");
	printf ("\n Enter the initial value:");
	scanf ("%f",&x0);
	printf ("\n f(x0)\t\t df(x0)\t\txl \t\t Error");
	printf ("\n---------------------------------");
	begin:
		f0=f(x0);
		fd0=df(x0);
		x1=x0-(f0/fd0);
		e=fabs((x1-x0)/x1);
		if (e<E)
		{
			printf("\n\n Approximate root= %0.5f",x1);	
		}
		else {
			printf ("\n%.2f\t\t%.3f\t\t%.3f\t\t%.4f",f(x0),df(x0),x1,e);
			x0=x1;
			goto begin;
		}
		return 0;
		
	
}
