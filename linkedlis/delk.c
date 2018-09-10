#include<stdio.h>
#include<stdlib.h>
#include "linkedl.h"
//not working as expected
typedef struct ele
{
    struct ele* next;
    int p;
}elem;
struct ele* delk(struct ele* head,struct ele* rear,int k)
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
