#include<stdio.h>
#include<stdlib.h>
#define MAX 5
int queue[MAX];
int  front=0,rear=-1;
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
	 if(rear == MAX-1)
	{
	 printf("\n~~~~Queue overflow~~~~");
	 return;
	 }
	rear = rear + 1 ;
	queue[rear] = item;
}
int dequeue()
{
 int item;
 if(front == rear+1)
 {
  	printf("\n~~~~Queue underflow~~~~");
  	return -1;
  }
  item = queue[front];
  front = front+1;
  return item;
}
void display()
{
	 int i;
	 if(front == rear+1)
	 {
	 	printf("\n~~~~Stack is empty~~~~");
	 	return;
	  }
	  printf("\n Queues elements are:\n ");
	  for(i=rear; i>=front ; i--)
	 	printf("| %d |\n", queue[i]);
}
