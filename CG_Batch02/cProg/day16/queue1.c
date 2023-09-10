/*
   Demo on QUEUE operations
   - using  arrays
*/


#include <stdio.h>
#include<stdlib.h>

#define MAX 5

int Q[MAX];
int front;
int rear;


void enqueue();
void dequeue();
void dispElemts();

int main()
{
   int ch=1;
   front = 0;
   rear = front;


   while(1){
      printf("\n1. Enqueue");
      printf("\n2. Dequeue");
      printf("\n3. Display");
      printf("\n4. Exit");
      printf("\nChoice: ");
      scanf("%d",&ch);

      switch(ch)
      {
         case 1:
            enqueue();
            break;
         case 2:
            dequeue();
            break;
         case 3:
            printf("\nStack Elements are\n");
            dispElemts();
            break;
         case 4:
            printf("\nProgram Ends\n");
            exit(EXIT_SUCCESS);
            break;
         default:
            printf("\nEnter the correct choice");
      }
      
         
   }

   printf("\n\n");
   return 0;
}

void enqueue()
{
   //push/insert operations
   int val;
   if(rear == MAX)
   {
      printf("\nQueue is full\n");
      return;
   }

   printf("\nEnter the value to be enqueued: ");
   scanf("%d",&val);
   Q[rear++] = val;

}


void dequeue()
{
   //pop/pull operations
   
   if(front == rear)
   {
      printf("\nQueue is empty\n");
      return;
   }

   printf("\nthe dequeued element is : %d",Q[front++]);
   
   
}


void dispElemts()
{
   int i;

   if(front == rear)
   {
      printf("\nQueue is empty\n");
      return;
   }

   for(i=front;i<rear;i++)
      printf(" %d ",Q[i]);
   
}