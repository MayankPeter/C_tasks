#include<stdio.h>
#include<stdlib.h>
typedef struct data
{
	int num;
	struct data *next;
}SLL;

void print(SLL *);
void add_begin(SLL **);
void delete_node(SLL **);
void rem_duplicate(SLL **);

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
	
	print(head);

	rem_duplicate(&head);

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

void rem_duplicate(SLL **ptr)
{
SLL *cur = *ptr, *tmp;
while(cur->next)
{
if(cur->num==cur->next->num)
{
tmp->next = cur->next;
free(cur);
cur = tmp->next;
}
else
{
tmp = cur;
cur = cur->next;
}
}
}
