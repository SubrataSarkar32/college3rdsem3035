#include <stdio.h>
#include <stdlib.h>
#include "headl.h"
#include <stdlib.h>
typedef struct ele
{
    struct ele* next;
    int p;
}elem;
int main()
{
    int* a;
    elem* head=NULL;
    elem* rear=NULL;
	int k=0,p=0,element=0,choice=0,res=-2,o=0,i=0;
	while(o==0)
	{
		printf("0.Insertion\n1.deletion\n3.Accessing\nEnter choice:");
		scanf("%d",&choice);
		if(choice==0)
		{
			printf("Enter position to insert at:");
			scanf("%d",&p);
			printf("Enter element: ");
			scanf("%d",&element);
			head=insertarray(head,rear,element,p);
			elem* pos=(elem*)malloc(sizeof(elem));
			printf("%d %p\n",res,head);
			if(head!=0)
			{
				if(head!=NULL)
                {
                   pos=head;
                   while(i<k && pos!=NULL)
                   {
                     printf("%d ",pos->p);
                     pos=pos->next;
                     i++;
                   }
                }
                printf("\n");
			}
		}
		else if(choice==1)
		{
			printf("Enter position to insert at:");
			scanf("%d",&p);
			res=deletearray(head,rear,p);
			elem* pos=(elem*)malloc(sizeof(elem));
			if(res==0)
			{
				if(head!=NULL)
                {
                   pos=head;
                   i=0;
                   while(i<k && pos!=NULL)
                   {
                     printf("%d ",pos->p);
                     pos=pos->next;
                     i++;
                   }
                }
                printf("\n");
			}
		}
        else if(choice==2)
        {
            if(head!=NULL)
                {

                   elem* pos=(elem*)malloc(sizeof(elem));
                   pos=head;
                   printf("%d",pos->p);
                   while(pos!=NULL)
                   {
                     printf("%d ",pos->p);
                     pos=pos->next;
                     i++;
                   }
                }
                printf("\n");
        }
		printf("Do you want to continue(0-Yes/1-No)");
		scanf("%d",&o);
	}
	return 0;
}
