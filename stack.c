 #include<stdio.h>
int top=-1;
int stack[4];
int size=4;
void push(int data)
{   
    int i;
	if(top<(size-1))
	{
		top++;
		printf("Please Enter The Data :");
		scanf("%d",&data);
		stack[top]=data;
		for(i=top;i>=0;i--)
		{
			printf("|%d|\n",stack[i]);
		}
	}
	else 
		printf("Stack Over Flow \n");
}
void pop()
{
	if(top==-1)
	{
		printf("Stack Is Empty\n");
	}
	else
	{
		int i;
		top--;
		printf("Remaining Stack :\n");
		for(i=top;i>=0;i--)
		{
			printf("|%d|\n",stack[i]);
		}
	}
}
void disp()
{
	int i;
	if(top!=-1) 
	{
		for(i=top;i>=0;i--)
		{
			printf("|%d|\n",stack[i]);
		}
	}
	else printf("Stack Is Empty\n");
}
void exit();
int main()
{    
    int x,n,y;
    printf("Press Any Non Zero Number To Start :");
    scanf("%d",&x);
		while(x)
		{
			printf("Press 1: Push\n");
			printf("Press 2: Pop\n");
			printf("press 3: disp\n");
			printf("Press 4: Exit\n");
			scanf("%d",&n);
			switch(n)
			{
				
				case 1: push(y);
						break;
				case 2: pop();
			      	 	printf("\n");
						break; 
				case 3: disp();
				        break;
				case 4: exit(0);
			        	break;
			    default :
			        printf("Sorry Please ener a valid input\n");
			        printf("Enter Any Non Zero Number To Continue :");
                    scanf("%d",&x);
			}
		}
}
