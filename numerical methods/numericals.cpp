#include <stdio.h>
#include <math.h>
float fun(float x){
	float temp;
	temp=pow(2.7189,-(x*x));
	return temp;	
}
int main(){
	float a,b,h,sum,f,f1,f2,result;
	int i,n;
	printf("Enter lower limit\n");
	scanf("%f",&a);
	printf("Enter the upper limit\n");
	scanf("%f",&b);
	printf("Enter n= ");
	scanf("%d",&n);
	h=(b-a)/n;
	sum=0;
	f1=fun(a);
	f2=fun(b);
	for(i=1;i<n;i++){
		f=fun(a+i*h);
		sum+=(2*f);
	}
	result=((sum*h)/2);
	printf("The result= %f\n",result);
	return 0;
}
