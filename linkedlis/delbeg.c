#include<stdio.h>
#include<stdlib.h>
typedef struct ele
{
    struct ele* next;
    int p;
}elem;
struct ele* delbeg(struct ele* head,struct ele* rear)
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
