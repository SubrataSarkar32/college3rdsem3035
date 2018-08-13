#include<stdio.h>

int insk(int max,int* a,int element,int len,int p)
{
	int i=0;
	if(max!=len)
	{
		for (i=len;i>p;i--)
    	{
		     a[i+1]=a[i];
    	}
    	a[p]=element;
    	len+=1;
    	return  len;
	}
    else
    {
    	printf("OVERFLOW");
	}
	return -2;
}

