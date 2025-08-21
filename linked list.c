#include<stdio.h>
#include<malloc.h>
struct node{
    int data ;
    struct node *prev;
    struct node *next;
};
void reverselist(struct node *p)
{
	printf("Data Of all previous nodes \n");
	while(p!=NULL)
	{
		printf("%d\n",p->data);
		p=p->prev;
	}
}
void datas(struct node *p)
{
    printf("Data of All next nodes \n");
    while(p!=NULL)
    {
        printf("%d\n",p->data);
        p=p->next;
    }
}
void address(struct node *p)
{
    printf("Address Of node \n");
   while(p!=NULL)
  {
        printf("%d\n",p);
        p=p->next;
  }
}
int main()
{
    struct node *head;
    struct node *n1;
    struct node *n2;
    struct node *n3;
    struct node *n4;
    head=malloc(sizeof(struct node));
    n1=malloc(sizeof(struct node));
    n2=malloc(sizeof(struct node));
    n3=malloc(sizeof(struct node));
    n4=malloc(sizeof(struct node));
    printf("Enter the value of head : ");
    scanf("%d",&head->data);
    printf("Enter the value of n1 : ");
    scanf("%d",& n1->data);
    printf("Enter the value of n2 : ");
    scanf("%d",& n2->data);
    printf("Enter the value of n3 : ");
    scanf("%d",& n3->data);
    printf("Enter the value of n4 : ");
    scanf("%d",& n4->data);
    head->prev=NULL;
    head->next=n1;
    n1->prev=head;
    n1->next=n2;
    n2->prev=n1;
    n2->next=n3;
    n3->prev=n2;
    n3->next=n4;
    n4->prev=n3;
    n4->next=NULL;
   
    datas(head);
    reverselist(head);
     address(head);
}
