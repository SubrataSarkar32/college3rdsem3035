#include<stdio.h>
#include<stdlib.h>
#include<math.h>
float fun (float);
int main()
{
	float x0,x1,x2,f0,f1,f2,e;
	int i;
	printf ("Enter the value of X0\n");
	scanf ("%f",&x0);
	printf ("Enter the value of X1\n");
	scanf ("%f",&x1);
	printf ("Enter the value of error\n");
	scanf ("%f",&e);
	i=1;
	do{
		f0=fun(x0);
		f1=fun(x1);
		if (f0*f1>0)
		{
			exit(0);
		}
		x2=(x0+x1)/2;
		f2=fun(x2);
			if ((f0*f2)>0)
		{
			x0=x2;
		}
		else
		{
			x1=x2;
		}
		i++;
}while (fabs((x1-x0)/x1)>e);
printf ("The root is =%f",x2);
printf ("the value of the function is =%f",f2);
printf ("\n No of iteration=%d",i);
return 0;
}
float fun(float x)
{
	return ((x*x*x)-(x)-4);
	
}
