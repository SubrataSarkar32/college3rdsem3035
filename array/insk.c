#include<stdio.h>

int insk(int max,int* a,int element,int len,int p)
{
	int i=0;
	p-=1;
	if(max!=len && p<=len+1)
	{
		for (i=len+1;i>=p;i--)
    	{
		     a[i]=a[i-1];
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

