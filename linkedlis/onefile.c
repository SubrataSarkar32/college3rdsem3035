/*#include <stdio.h>
#include <stdlib.h>
#include "linkedl.h"
#include <stdlib.h>
typedef struct ele
{
    struct ele* next;
    int p;
}elem;
void insbeg(struct ele* head,struct ele*rear, int element)
{
    elem* pos=(elem*)malloc(sizeof(elem));
    if(pos==NULL)
    {
        printf("Memory Full");
    }
    else
    {
        if(head==NULL)
        {
            pos->next=NULL;
            pos->p=element;
            rear=pos;
            head=pos;
            return pos;
        }
        else
        {
            pos->next=head;
            pos->p=element;
            head=pos;
            return pos;
        }
    }
}
void insk(struct ele* head,struct ele* rear,int element,int k)
{
    elem* pos=(elem*)malloc(sizeof(elem));
    int i=0;
    if(pos==NULL)
    {
        printf("Memory Full");
    }
    else
    {
        if(rear==NULL && head==NULL)
        {
            pos->next=NULL;
            pos->p=element;
            rear=pos;
            head=pos;
        }
        else
        {
            pos=head;
            i=1;
            while(i<k && pos!=NULL)
            {
               pos=pos->next;
               i++;
            }
            if(i==k && pos==NULL)
            {
                rear->next=pos;
                pos->next=NULL;
                pos->p=element;
                rear=pos;
                head=pos;
            }
            else
            {
                elem* pos1=pos->next;
                elem* pos2=(elem*)malloc(sizeof(elem));
                pos->next=pos2;
                pos2->p=element;
                pos2->next=pos1;
            }
        }
    }
}
void insrea(struct ele* head,struct ele* rear,int element)
{
    elem* pos=(elem*)malloc(sizeof(elem));
    if(pos==NULL)
    {
        printf("Memory Full");
        return 0;
    }
    else
    {
        if(rear==NULL && head==NULL)
        {
            pos->next=NULL;
            pos->p=element;
            head=pos;
            rear=pos;
            return pos;
        }
        else
        {
            printf("%p\n",rear);
            rear->next=pos;
            pos->next=NULL;
            pos->p=element;
            printf("%p\n",rear->next);
            rear=pos;
            printf("%p\n",rear);
            return pos;
        }
    }
}
void delbeg(struct ele* head,struct ele* rear)
{
    if(head==NULL)
    {
        printf("UNDERFLOW");
        return NULL;
    }
    else
    {
        if(head==rear)
        {
            struct ele* pos1=head;
            rear=NULL;
            free(pos1);
            return NULL;
        }
        else
        {
            struct ele* pos1=head;
            head=pos1->next;
            free(pos1);
            return head;
        }
    }
}
void delk(struct ele* head,struct ele* rear,int k)
{
    elem* pos=(elem*)malloc(sizeof(elem));
    int i=0;

        if(rear==NULL && head==NULL)
        {
            printf("UNDERFLOW!!!");
            return NULL;
        }
        else
        {
            pos=head;
            i=1;
            while(i<k && pos!=NULL)
            {
               pos=pos->next;
               i++;
            }
            printf("%p",pos);
            if(i==k)
            {
                rear=delrea(head,rear);
                return head;
            }
            else
            {
                elem* pos1=pos->next;
                elem* pos2=pos1->next;
                pos->next=pos2;
                free(pos1);
                return head;
            }
        }
}
void delrea(struct ele* head,struct ele* rear)
{
    if(rear==NULL)
    {
        printf("UNDERFLOW");
        return NULL;
    }
    else
    {
        if(head==rear)
        {
            struct ele* pos1=head;
            head=NULL;
            free(pos1);
            return NULL;
        }
        else
        {
            struct ele* pos=head;
            while(pos!=rear)
            {
               if(pos->next==rear)
               {
                   break;
               }
               pos=pos->next;
            }
            struct ele* pos1=rear;
            free(pos1);
            rear=pos;
            return rear;
        }
    }
}
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
		    	printf("%p",rear);
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
		    	rear=insrea(head,rear,element);
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
*/
