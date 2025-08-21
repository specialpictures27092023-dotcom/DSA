#include<stdio.h>
int size=5;
int rear=-1;
int front =-1;
int queue[5],i;
void enqueue(int data)
{
	if(rear<(size-1))
	{
		if(front==-1) front=0;
		rear++;
		printf("Enter the data :");
		scanf("%d",&data);
		queue[rear]=data;
		for(i=front;i<=rear;i++)
		{
			printf("%d\n",queue[i]);
		}
	}
	else
	{
		printf("Queue Is Overflow \n");
	}
}
void dequeue()
{
	if(front==-1||front>rear)
	{
		printf("Queue Is Empty \n");
	}
	else
	{
		int  d=queue[front];
		printf("The data you dequeued is :%d\n",d);
		front++;
		if(front>rear) front=rear=-1;
	}
}
int main() {
    int x, n;
    printf("Press Any Non-Zero Number To Start :");
    scanf("%d", &x);
    while (x) {
        printf("Press 1: Push\n");
        printf("Press 2: Pop\n");
        scanf("%d", &n);
        switch (n) 
		{
            case 1: enqueue(n);
                    break;
            case 2: dequeue();
                    printf("\n");
                    break;
            default:
                printf("Please enter a valid input\n");
                printf("Enter Any Non-Zero Number To Continue :");
                scanf("%d", &x);
        }
    }
}

