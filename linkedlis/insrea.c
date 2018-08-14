#include<stdio.h>
#include<stdlib.h>
//not working as expectd
typedef struct ele
{
    struct ele* next;
    int p;
}elem;
struct ele* insrea(struct ele* head,struct ele* rear,int element)
{
    elem* pos=(elem*)malloc(sizeof(elem));
    if(pos==NULL)
    {
        printf("Memory Full");
        return 0;
    }
    else
    {
        if(rear==NULL)
        {
            pos->next=NULL;
            pos->p=element;
            head=pos;
            rear=pos;
            return pos;
        }
        else
        {
            rear->next=pos;
            pos->next=NULL;
            pos->p=element;
            rear=pos;
            return pos;
        }
    }
}
