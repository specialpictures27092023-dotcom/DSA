#include <stdio.h>
int top = -1;
int Queue[4];
int size=sizeof(Queue)/sizeof(Queue[0]);
void enqueue(int data) {
    if (top == size - 1) {
        printf("Queue is full\n");
    } else {
    	top++;
        printf("Please Enter The Data :");
        scanf("%d", &data);
        Queue[top] = data;
        for (int i = 0; i <= top; i++) {
            printf("%d\n", Queue[i]);
        }
    }
}

void dequeue() {
    if (top == -1) {
        printf("Queue is empty\n");
    } else {
        printf("%d Dequeued from queue\n", Queue[0]);
        for (int i = 0; i < top; i++) {
            Queue[i] = Queue[i + 1];
        }
        top--;
    }
}

void disp() {
    if (top == -1) {
        printf("Queue is empty\n");
    } else {
    	printf("QUEUE IS :\n");
        for (int i = 0; i <= top; i++) {
            printf("%d\n", Queue[i]);
        }
    }
}

int main() {
    int x, n;
    printf("Press Any Non-Zero Number To Start :");
    scanf("%d", &x);
    while (x) {
        printf("Press 1: enqueue\n");
        printf("Press 2: dequeue\n");
        printf("Press 3: Display\n");
        printf("Press 4: Exit\n");
        scanf("%d", &n);
        switch (n) 
		{
            case 1: enqueue(n);
                    break;
            case 2: dequeue();
                    printf("\n");
                    break;
            case 3: disp();
                    break;
            case 4: return 0;
            default:
                printf("Please enter a valid input\n");
                printf("Enter Any Non-Zero Number To Continue :");
                scanf("%d", &x);
        }
    }
}

