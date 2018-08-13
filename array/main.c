#include <stdio.h>
#include <stdlib.h>
#include "heada.h"
#include <stdlib.h>
int main()
{
    int n,i=0,k=0,element=0;
    printf("Ebter the number of elements: ");
    scanf("%d",&n);
    int* a;
    a=(int*)calloc(n,sizeof(int));
	int p=0,choice=0,res=-2,o=0,choice1=0;
	while(o==0)
	{
		printf("0.Insertion\n1.deletion\n3.Accessing\nEnter choice:");
		scanf("%d",&choice);
		if(choice==0)
		{
		    printf("1.Insert at beg\n2.Insert at k\n3.Insert at rear");
		    scanf("%d",&choice1);
		    if(choice1==1)
            {
                printf("Enter element: ");
		    	scanf("%d",&element);
		    	k=insbeg(n,a,element,k);
            }
            else if(choice1==2)
            {
                printf("Enter position to insert at:");
		    	scanf("%d",&p);
		    	printf("Enter element: ");
			    scanf("%d",&element);
		     	k=insk(n,a,element,k,p);
            }
            else if(choice1=3)
            {
                printf("Enter element: ");
	    		scanf("%d",&element);
		    	k=inslast(n,a,element,k);
            }
            else
            {

                printf("Invalid option");
            }
			if(k!=0)
			{
				for(i=0;i<k;i++)
                {
                    printf("%d ",a[i]);
                }
				printf("\n");
			}
			printf("%d\n",k);
		}
		else if(choice==1)
		{
		    printf("1.Delete at beg\n2.Delete at k\n3.Delete at rear\n");
		    scanf("%d",&choice1);
		    if(choice1==1)
            {
                k=delbeg(n,a,k);
            }
            else if(choice1==2)
            {
                printf("Enter position to delete at:");
		    	scanf("%d",&p);
			    k=delk(n,a,k,p);
            }
            else if(choice1==3)
            {
                k=delrea(n,a,k);
            }
            else
            {
                printf("Invalid choice");
            }
			if(k!=0)
			{
				for(i=0;i<k;i++)
                {
                    printf("%d ",a[i]);
                }
				printf("\n");
			}
			printf("%d\n",k);
		}
        else if(choice==2)
        {
            if(k!=0)
			{
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
