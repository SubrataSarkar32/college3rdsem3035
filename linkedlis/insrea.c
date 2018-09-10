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
            elem* pos2=(elem*)malloc(sizeof(elem));
                pos->next=pos2;
                pos2->next=NULL;
                pos2->p=element;
                rear=pos;
                return pos;
            return pos;
        }
    }
}
