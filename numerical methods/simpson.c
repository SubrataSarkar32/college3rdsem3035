#include <stdio.h>
#include <math.h>
float fun(float x){
	float temp;
	temp=exp(-(x*x));
	return temp;	
}
int main(){
	float a,b,h,sum=0,f,f1,f2=0,f3=0,result;
	int i,n;
	printf("Enter lower limit\n");
	scanf("%f",&a);
	printf("Enter the upper limit\n");
	scanf("%f",&b);
	printf("Enter n= ");
	scanf("%d",&n);
	h=(b-a)/n;
	f1=fun(a)+fun(b);
	sum=((h/3)*f1);
	for(i=1;i<n;i++){
		if(i%2!=0){
			f2=f2+4*fun(a+(i*h));
		}
		else{
			f3=f3+2*fun(a+(i*h));
		}
	}
	sum=sum+((h/3)*(f2+f3));
	printf("The integral value is:::%f\n",sum);
	return 0;
}
