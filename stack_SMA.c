//Stack implementation in SMA(array)
#include<stdio.h>
#include<stdlib.h>
#define MAX 5
void push(int);
void pop();
void traversal();
void peek();
int stack[MAX];
int top=-1;
int main()
{
	int ch,ele;
	while(1)
	{
		printf("\n--------------------Stack operations-----------------\n");
		printf("press 1 for push\n");
		printf("press 2 for pop\n");
		printf("press 3 for traversal\n");
		printf("press 4 for peek\n")
		printf("press 5 for exit\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				printf("Enter an element:");
				scanf("%d",&ele);
				push(ele);
				break;
			case 2:
				pop();
				break;
			case 3:
				traversal();
				break;
			case 4:
				peek();
				break;
			case 5:
				exit(0);
			default:
				printf("Please enter the number between 1-5\n");
				break;
		}
	}

	return 0;
}
void push(int x)
{
	if(top==MAX-1)
	{
		printf("stack is overflow condition\n");
	}
	else
	{
		top++;
		stack[top]=x;	
	}

}
void pop()
{
	if(top==-1)
	{
		printf("Stack is underflow condition\n");
	}
	else
	{
		printf("Poped element is : %d\n",stack[top]);
		top--;
	}

}
void traversal()
{
	int i;
	if(top==-1)
	{
		printf("Stack is underflow condition\n");
	}
	else
	{
		printf("Stack element are : ");
		for(i=0;i<=top;i++)
		{
		printf("%d ",stack[i]);
		}
	}

}
void peek()
{
	printf("Peek element is :%d\n",stack[top]);
}
