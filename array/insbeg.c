
#include<stdio.h>

int insbeg(int max,int* a,int element,int len)
{
	int i=0;
	if(max!=len)
	{
		for(i=len;i>len;i--)
    	{
		     a[i+1]=a[i];
    	}
    	a[0]=element;
    	len+=1;
    	return  len;
	}
    else
    {
    	printf("OVERFLOW");
	}
	return -2;
}

