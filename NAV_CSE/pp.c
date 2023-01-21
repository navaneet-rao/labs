#include<stdio.h>
#include<stdlib.h>
#define MAX 5
int s[MAX];
int top = -1;
void push(int item);
int pop();
void display();
void main()
{
	 int choice, item;
	 while(1)
	{
		 printf("\n\n\n\n~~~~~~Menu~~~~~~ : ");
		 printf("\n=>1.Push an Element to Stack and Overflow  ");
		 printf("\n=>2.Pop an Element from Stack and Underflow ");
		printf("\n=>3.Display ");
		printf("\n=>4.Exit");
		printf("\n Enter your choice: ");
		scanf("%d", &choice);
		switch(choice)
		{
			case 1: printf("\n Enter an element to be pushed: "); 
			scanf("%d", &item);
			push(item);
			break;
			case 2:          
			item = pop();
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
void push(int item)
{
	 if(top == MAX-1)
	{
	 printf("\n~~~~Stack overflow~~~~");
	 return;
	 }
	top = top + 1 ;
	s[top] = item;
}
int pop()
{
 int item;
 if(top == -1)
 {
  	printf("\n~~~~Stack underflow~~~~");
  	return -1;
  }
  item = s[top];
  top = top - 1;
  return item;
}
void display()
{
	 int i;
	 if(top == -1)
	 {
	 	printf("\n~~~~Stack is empty~~~~");
	 	return;
	  }
	  printf("\n Stack elements are:\n ");
	  for(i=top; i>=0 ; i--)
	 	printf("| %d |\n", s[i]);
}
