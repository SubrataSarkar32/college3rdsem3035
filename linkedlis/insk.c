#include<stdio.h>
#include<stdlib.h>
#include "linkedl.h"
typedef struct ele
{
    struct ele* next;
    int p;
}elem;
struct ele* insk(struct ele* head,struct ele* rear,int element,int k)
{
    elem* pos=(elem*)malloc(sizeof(elem));
    int i=0;
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
            rear=pos;
            return pos;
        }
        else
        {
            pos=head;
            i=0;
            while(i<k && pos!=NULL)
            {
               pos=pos->next;
               i++;
            }
            if(i0==k && pos==NULL)
            {
                rear=insrea(head,rear,element);
                return head;
            }
            else
            {
                elem* pos1=pos->next;
                elem* pos2=(elem*)malloc(sizeof(elem));
                pos->next=pos2;
                pos2->p=element;
                pos2->next=pos1;
                return head;
            }
        }
    }
}
