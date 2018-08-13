#include<stdio.h>
int delrea(int max,int* a,int len)
{
	if(len>=0)
	{
		printf("deleted\n");
		a[len]=0;
    	len-=1;
    	return  len;
	}
    else
    {
    	printf("UNDERFLOW!");
	}
	return -2;
}
