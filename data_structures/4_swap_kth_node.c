#include<stdio.h>
#include<stdlib.h>
typedef struct data
{
	int num;
	struct data *next;
}SLL;

void print(SLL *);
void add_begin(SLL **);
void swap(SLL **);

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
	swap(&head);
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
	}
}

void swap(SLL **ptr)
{
	int i,pos, c;
	c = count(*ptr);
	SLL *tmp1, *tmp2, *tmp;
	printf("Enter the node pos to swap\n");
	scanf(" %d",&pos);
	pos--;

	SLL *last = *ptr;
	SLL *first = *ptr;

	for(i=0;i<pos;i++)
	{
		tmp1 = first;
		first = first->next;
	}

	for(i=0;i<c-pos-1;i++)
	{
		tmp2 = last;
		last = last->next;
	}

	tmp = last->next;

	tmp1->next = last;
	last->next = first->next;
	tmp2->next = first;
	first->next = tmp;
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
