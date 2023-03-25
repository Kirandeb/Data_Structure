//Implement Circular Queue using Array (SMA)
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define MAX 5
void enqueue();
void dequeue();
void display();
int queue[MAX];
int front=-1;
int rear=-1;

int main()
{
	int ch;
	while(1)
	{
	printf("\n------------------Circular Queue Operations-----------------\n");
	printf("1.enqueue operation \n");
	printf("2.dequeue operation \n");
	printf("3.display operation\n");
	printf("4.Peek operation\n");
	printf("5.Exit\n");
	printf("Enter your option number : ");
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
			display();
			break;
		case 5:
			exit(0);
		default:
			printf("Please Enter valid  option\n");
		}	
	}
	getch();
	return 0;	
}
void enqueue()
{
	int data;
	if(front==-1 && rear==-1)
	{
		printf("Enter the data : \n");
		scanf("%d",&data);
		front=rear=0;
		queue[rear]=data;
	}
	else if((rear+1)%MAX==front)
	{
		printf("Circular Queue is full\n");
	}
	else
	{
		printf("Enter the data : \n");
		scanf("%d",&data);
		rear=(rear+1)%MAX;
		queue[rear]=data;
	}
}

void dequeue()
{
	if(front==-1 && rear==-1)
	{
		printf("Circular queue is empty\n");
	}
	else if(rear==front)
	{
		front=rear=-1;
	}
	else
	{
		printf("Dequeue element is %d : ",queue[front]);
		front=(front+1)%MAX;
	}
}

void display()
{
	int i=front;
	if(front==-1 && rear==-1)
	{
		printf("Circular queue is empty\n");
	}
	else
	{
		printf("circular Queue elements are ----------\n");
		while(i!=rear)
		{
			printf("%d ",queue[i]);
			i=(i+1)%MAX;
		}
		printf("%d ",queue[rear]);
	}
}


