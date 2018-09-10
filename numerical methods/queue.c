 #include <stdio.h>
 #include <stdlib.h>


void insert(int ai);
void delete (int ai);
void display (int ai);
  int main()
 {
     int k, que_ar[50];

         printf("1 for inserting the element \n");
         printf("2 for deleting\n");
         printf("3 for displaying\n");
        printf("enter the choice:");
             scanf("%d",&k);
             switch(k)
         {case 1:
            insert();
         break;
         case 2:
             delete();
             break;
         case 3:
            display();
            break;
         default:
            printf("wrong choice");



 }
void insert( int MAX, int ai)
 {
     int*front ,*rear;
     int ai ;
     if (rear == MAX-1)
        printf("queue is overflow");

        else{
                if (front ==-1)

            {
                front = 0;
                rear = 0;
        printf("enter the element that should be inserted in the queue:");
        scanf("%d",&ai);
        rear = rear +1;
        que_ar[rear]= ai;

            }
        }
     void delete ( int*front ,int *rear,int MAX, int ai)
        {
            if (front == -1 || front>rear)
            {
                printf("queue under flow \n");
                return ;
            }
            else
            {
                printf("element deleted from queue is :%d\n ", que_ar[front]);
                front = front +1;
            }
        }
   void display ( int*front ,int *rear, int MAX, int ai)
     {
         int i;
         if (front == -1)
            printf("queue is empty:" );
         else
         {
             for(i=front; i<=rear ; i++)
                printf("%d\n",que_ar[i]);

         }
     }
 }
 }
