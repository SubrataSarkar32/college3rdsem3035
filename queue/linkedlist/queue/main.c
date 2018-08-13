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
    elem* head=NULL;
    elem* rear=NULL;
    elem* pos=NULL;
	int k=0,element=0,choice=0,res=-2,o=0,i=0;
	while(o==0)
	{
	    i=0;
		printf("0.Enqueue\n1.Dequeue\n2.Show full stack\nEnter choice:");
		scanf("%d",&choice);
		if(choice==0)
		{
            printf("Enter element: ");
		    scanf("%d",&element);
		    if(head==NULL)
            {
                head=insbeg(head,rear,element);
                rear=head;
            }
            else
            {
                head=insbeg(head,rear,element);
            }
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
		else if(choice==1)
		{
			elem* pos=(elem*)malloc(sizeof(elem));
            rear=delrea(head,rear);
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
        else if(choice==2)
        {
            if(head!=NULL)
                {

                   elem* pos=(elem*)malloc(sizeof(elem));
                   pos=head;
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
