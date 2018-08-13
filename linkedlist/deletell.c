
#include<stdio.h>
#include  <stdlib.h>
typedef struct ele
{
    struct ele* next;
    int p;
}elem;
int deletearray(struct ele* head, struct ele* rear,int k)
{
    elem* pos=(elem*)malloc(sizeof(elem));
    if(pos==NULL)
    {
        printf("Memory Full");
        return -2;
    }
    else
    {
      if(k==1)
      {
          if(head!=NULL)
          {
              pos=head;
              elem* pos1=(elem*)malloc(sizeof(elem));
              pos1=pos->next;
              free(pos);
              head=pos1;
          }
          else
          {
              printf("UNDERFLOW");
          }
          printf("Deleted");
      }
      else
      {
          int i=1;
          if(head!=NULL)
          {
              pos=head;
              while(i<(k-1) && pos!=NULL)
              {
               pos=pos->next;
               i++;
              }
              if(pos->next!=NULL)
              {
                  elem* pos1=(elem*)malloc(sizeof(elem));
                  pos1=pos->next;
                  pos->next=pos1->next;
                  free(pos1);
              }
              else
              {
                  printf("Index provided is not in this linked list");
              }
              printf("Deleted");
          }
          else
          {
            printf("UNDERFLOW!!!");
          }

      }

    }
    return 0;
}
