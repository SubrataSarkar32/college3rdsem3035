#include <stdio.h>
#include <stdlib.h>
#include "array.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int* a;
	int len,k=0,p=0,element=0,choice=0,res=-2,o=0,i=0;
	printf("Enter length of array:");
	scanf("%d",&len);
	a=(int *)calloc(len,sizeof(int));
	while(o==0)
	{
		printf("Enter choice:");
		scanf("%d",&choice);
		if(choice==0)
		{
			printf("Enter position to insert at:");
			scanf("%d",&p);
			printf("Enter element: ");
			scanf("%d",&element);
			res=insertarray(len,a,element,k,p);
			if(res!=-2)
			{
				k=res;
				printf("%d\n",res);
			    for(i=0;i<k;i++)
			    {
			    	printf("%d ",a[i]);
				}
				printf("\n");
		    }
		}
		else if(choice==1)
		{
			printf("Enter position to delete at:");
			scanf("%d",&p);
			res=deletearray(len,a,k,p);
			if(res!=-2)
			{
				k=res;
				printf("%d\n",res);
			    for(i=0;i<k;i++)
			    {
			    	printf("%d ",a[i]);
				}
				printf("\n");
		    }
		}
		
		printf("Do you want to continue(0-Yes/1-No)");
		scanf("%d",&o);
	}
	return 0;
}
