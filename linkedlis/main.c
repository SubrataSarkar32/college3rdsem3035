#include <stdio.h>
#include <stdlib.h>
#include "linkedl.h"
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
    elem* pos=NULL;
	int k=0,p=0,element=0,choice=0,res=-2,o=0,i=0,choice1=0;
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
		    	head=insbeg(head,rear,element);
		    	printf("%p %p\n",rear,head );
            }
            else if(choice1==2)
            {
                printf("Enter position to insert at:");
		    	scanf("%d",&p);
		    	printf("Enter element: ");
			    scanf("%d",&element);
		     	head=insk(head,rear,element,p);
            }
            else if(choice1=3)
            {
                printf("Enter element: ");
	    		scanf("%d",&element);
		    	rear=insrea(head, rear,element);
            }
            else
            {
                printf("Invalid option");
            }
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
		    printf("1.Delete at beg\n2.Delete at k\n3.Delete at rear\n");
		    scanf("%d",&choice1);
		    if(choice1==1)
            {
                head=delbeg(head,rear);
            }
            else if(choice1==2)
            {
                printf("Enter position to delete at:");
		    	scanf("%d",&p);
			    head=delk(head,rear,p);
            }
            else if(choice1==3)
            {
                rear=delrea(head,rear);
            }
            else
            {
                printf("Invalid choice");
            }
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
                   }
                }
                printf("\n");
        }
		printf("Do you want to continue(0-Yes/1-No)");
		scanf("%d",&o);
	}
	return 0;
}
