#include<stdio.h>
#include<stdlib.h>
typedef struct ele
{
    struct ele* next;
    int p;
}elem;
struct ele* insbeg(struct ele* head,struct ele* rear,int element)
{
    elem* pos=(elem*)malloc(sizeof(elem));
    if(pos==NULL)
    {
        printf("Memory Full");
        return 0;
    }
    else
    {
        if(head==NULL)
        {
            pos->next=NULL;
            pos->p=element;
            rear=pos;
            head=pos;
            head=rear;
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
