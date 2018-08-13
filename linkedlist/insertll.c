
#include<stdio.h>
#include  <stdlib.h>
typedef struct ele
{
    struct ele* next;
    int p;
}elem;
struct ele* insertarray(struct ele* head,  struct ele* rear,int element,int k)
{
    elem* pos=(elem*)malloc(sizeof(elem));
    if(pos==NULL)
    {
        printf("Memory Full");
        return 0;
    }
    else
    {
      if(k==1)
      {
          pos->p=element;
          if(head==NULL)
          {
              pos->next=NULL;
              head=pos;
              rear=pos;
              printf("%d %p %p",pos->p,pos,head);
              return head;
          }
          else
          {
              pos->next=head;
              head=pos;
              printf("%d",pos->p);
              return head;
          }
          printf("Inserted");
      }
      else
      {
          int i=1;
          if(head!=NULL)
          {
              pos=head;
              printf("%p %p\n",head,pos);
              while(i<k-1 && pos!=NULL)
              {
               printf("%p\n",pos);
               pos=pos->next;
               i++;
              }
              printf("Here. %p",pos);
              if(pos->next==NULL)
              {
                  printf("This 1.");
                  elem* pos1=(elem*)malloc(sizeof(elem));
                  pos->next=pos1;
                  pos1->p=element;
                  pos1->next=NULL;
                  rear=pos1;
                  printf("%d",pos1->p);
                  return head;
              }
              else
              {
                  printf("This 2.");
                  elem* pos1=(elem*)malloc(sizeof(elem));
                  pos1->next=pos->next;
                  pos->next=pos1;
                  pos1->p=element;
                  printf("%d",pos1->p);
                  return head;
              }
              printf("Done");
          }
          else
          {
            printf("This 3.");
            pos->next=NULL;
            pos->p=element;
            head=pos;
            rear=pos;
            printf("%d",pos->p);
            printf("Done");
            return head;
          }

      }

    }
    return 0;
}
