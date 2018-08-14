#include<stdio.h>
#include<stdlib.h>
//not working as expected
typedef struct ele
{
    struct ele* next;
    int p;
}elem;
struct ele* delrea(struct ele* head,struct ele* rear)
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
