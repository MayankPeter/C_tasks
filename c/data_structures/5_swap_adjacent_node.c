#include<stdio.h>
#include<stdlib.h>
typedef struct data
{
	int num;
	struct data *next;
}SLL;

void print(SLL *);
void add_begin(SLL **);
void swap_adj(SLL **);

void main()
{
	int ans;
	char ch;
	SLL *head = 0;
	do
	{
		add_begin(&head);

		printf("Do you want to add again?\n");
		scanf(" %c",&ch);
	}while(ch=='y' || ch=='Y');

	printf("do you want to swap nodes of LL?\n");
	scanf(" %c",&ch);
	if(ch=='y' || ch=='Y')

	print(head);
	swap_adj(&head);
	print(head);
}


void add_begin(SLL **ptr)
{
	SLL *new = malloc(sizeof(SLL));
	printf("Enter the number\n");
	scanf(" %d",&new->num);

	new->next = *ptr;
	*ptr = new;
}

void print(SLL *ptr)
{
	printf("\n");
	while(ptr)
	{
		printf("%d\n",ptr->num);
		ptr = ptr->next;
		sleep(0.01);
	}
}

void swap_adj(SLL **ptr)
{
SLL *ptr1 = *ptr, *ptr2 = (*ptr)->next;
SLL *tmp2, *tmp1 = ptr2;
while(ptr2->next)
{
ptr1->next = ptr2->next;
ptr2->next = ptr1;
tmp2 = ptr2;
tmp2->next = ptr2->next;
ptr1 = ptr2->next;
ptr2 = ptr1->next;
}
*ptr = tmp1;	
}

int count(SLL *ptr)
{
	int c=0;
	while(ptr)
	{
		c++;
		ptr = ptr->next;
	}
	return c;
}
