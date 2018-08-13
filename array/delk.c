#include<stdio.h>
int delk(int max,int* a,int len,int p)
{
	int i=0;
	if(len>=0)
	{
		printf("deleted\n");
		for (i=p;i!=len-1;i++)
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
