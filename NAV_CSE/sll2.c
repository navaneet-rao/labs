#include<stdio.c>
#include<stdlib.h>
struct node
{
    int data;
    struct node*next;
}*temp = NULL,*first = NULL,*second = NULL;

struct node*create(int A[],int n){
    int i;
    struct node*t,*last;
    temp=(struct node*)malloc(sizeof(struct node));
    temp->data=A[0];
    temp->next=NULL;
    last=temp;

    for(i=1;i<n;i++)
    {
        t=(struct node*)malloc(sizeof(struct node));
        t->data
