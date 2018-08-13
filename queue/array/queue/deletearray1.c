int deletearray1(int max,int* a)
{
    int i=0;
	if(len>=0)
	{
		printf("deleted\n");
		for (i=0;i!=max;i++)
    	{
		     a[i]=0;
    	}

    	len=0;
    	return  len;
	}
    else
    {
    	printf("UNDERFLOW!");
	}
	return -2;
}
