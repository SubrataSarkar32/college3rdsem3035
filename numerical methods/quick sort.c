#include<stdio.h>
#include<stdlib.h>
int partition(int* a,int beg,int end)
{
	int left,right,temp,pivot,i=0;
	left=pivot=beg;
	right=end;
	while(i!=1)
	{
		while(a[pivot]<=a[right]&&(pivot!=right))
		right--;
		if(pivot==right)
		i=1;
		else if(a[pivot]>a[right])
		{
			temp=a[pivot];
			a[pivot]=a[right];
			a[right]=temp;
			pivot=right;
		}
		if(i!=1)
		{
			while(a[pivot]>=a[left]&&(pivot!=left))
			left++;
			if(pivot==left)
			i=1;
			else if(a[pivot]<a[left])
		{
			temp=a[pivot];
			a[pivot]=a[left];
			a[left]=temp;
			pivot=left;
		}

		}
	}
	return pivot;
}

void quicksort(int* a,int beg,int end)
{
	int pivot;
	if(beg<end)
	{
		pivot=partition(a,beg,end);
		quicksort(a,beg,pivot-1);
		quicksort(a,pivot+1,end);
	}

}

int main(void)
{
	int n,i;
	int* a;
	printf("Enter the number of elements : ");
	scanf("%d",&n);
    a=(int*)malloc(n*sizeof(int));
	printf("\nEnter the elements : ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	quicksort(a,0,n-1);
	printf("The sorted array is:\n");
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	return 0;
}
