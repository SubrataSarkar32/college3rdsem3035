#include <stdio.h>
#include <stdlib.h>
#include "array.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int* a;
	int len,k=0,p=0,element=0,choice=0,res=-2,o=0,i=0;
	int fp=-1,rp=-1;
	printf("Enter length of array:");
	scanf("%d",&len);
	a=(int *)calloc(len,sizeof(int));
	while(o==0)
	{
		printf("0.Enqueue\n1.Dequeue\n3.Access\nEnter choice:");
		scanf("%d",&choice);
		if(choice==0)
		{
			p=k;
			res=0;
			printf("Enter element: ");
			scanf("%d",&element);
			if(fp==-1 && rp==-1)
                {
                    fp+=1;
                    rp+=1;
                }
                else
                {
                    rp+=1;
                }
			res=insertarray(len,a,element,k,rp);
			if(res!=-2)
			{
				k=res;
				printf("%d\n",res);
			    for(i=fp;i<=rp;i++)
			    {
			    	printf("%d ",a[i]);
				}
				printf("\n");
		    }
		}
		else if(choice==1)
		{
			p=fp;
			res=0;
			//res=deletearray(len,a,k,p);
			if(res!=-2)
			{
			    if(fp==rp && fp!=-1)
                {
                    fp=-1;
                    rp=-1;
                    k=0;
                    res=0;
                }
                else
                {
                    fp+=1;
                }
				//k=res;
				printf("%d\n",a[res]);
			    for(i=fp;i<=rp;i++)
			    {
			    	printf("%d ",a[i]);
				}
				printf("\n");
		    }
		    else
            {
                fp=-1;
                rp=-1;
                k=0;
                res=0;
            }
		}

		printf("Do you want to continue(0-Yes/1-No)");
		scanf("%d",&o);
	}
	free(a);
	return 0;
}
