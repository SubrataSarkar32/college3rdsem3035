#include<stdio.h>

int inslast(int max,int* a,int element,int len)
{
	int i=0;
	if(max!=len)
	{
    	a[len]=element;
    	len+=1;
    	return  len;
	}
    else
    {
    	printf("OVERFLOW");
	}
	return -2;
}

