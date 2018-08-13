#include<stdio.h>
int delbeg(int max,int* a,int len)
{
	int i=0;
	if(len>=0)
	{
		printf("deleted\n");
		for (i=0;i<len;i++)
    	{
		     a[i]=a[i+1];
    	}

    	len-=1;
    	return  len;
	}
    else
    {
    	printf("UNDERFLOW!");
	}
	return -2;
}
