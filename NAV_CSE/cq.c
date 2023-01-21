#include<stdio.h>
#include<stdlib.h>
#define MAX 5
int queue[MAX];
int  front=0,rear=-1,count=0;
void enqueue(int item);
int dequeue();
void display();
void main()
{
	 int choice, item;
	 while(1)
	{
		 printf("\n\n\n\n~~~~~~Menu~~~~~~ : ");
		 printf("\n=>1.Add an element into the queue and Overflow  ");
		 printf("\n=>2.pop an element from the queue and Underflow ");
		printf("\n=>3.Display ");
		printf("\n=>4.Exit");
		printf("\n Enter your choice: ");
		scanf("%d", &choice);
		switch(choice)
		{
			case 1: printf("\n Enter an element to be pushed: "); 
			scanf("%d", &item);
			enqueue(item);
			break;
			case 2:          
			item = dequeue();
			if(item != -1)
			printf("\n Element popped is: %d", item);
			break;
			case 3:display();
			break;
			case 4:exit(0);
			default: printf("\n Please enter valid choice ") ;
			break;
		}
	}
}
void enqueue(int item)
{
	 if(count == MAX)
	{
	 printf("\n~~~~Queue overflow~~~~");
	 return;
	 }
	rear = (rear + 1)%MAX ;
	queue[rear] = item;
        count++;
}
int dequeue()
{
 int item;
 if(count==0)
 {
  	printf("\n~~~~Queue underflow~~~~");
  	
  }
  else 
  { 
       if(front>rear&&rear==MAX-1)
       {
        front=0;rear=1;count=0;
       }
       else
       {
        item=queue[front];
        front=(front+1)%MAX;
        count--;
        return item;
       }
}
}
void display()
{
	 int i;
	 if(count==0)
	 {
	 	printf("\n~~~~QUEUE is empty~~~~");
	 	
	  }
          else
          {
	  printf("\n Queues elements are:\n ");
	  for(i=front; i<=rear ; i++)
          {
	 	printf("| %d |\n", queue[i]);
                front=(front+1)%MAX;
          }
         }
}
