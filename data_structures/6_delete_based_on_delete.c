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
void delete_node(SLL **);

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

	printf("do you want to delete nodes of LL?\n");
	scanf(" %c",&ch);
	if(ch=='y' || ch=='Y')
	delete_node(&head);

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

void delete_node(SLL **ptr)
{
int n;
SLL *tmp1, *tmp = *ptr;
printf("Enter the data to delete\n");
scanf(" %d",&n);

while(n!=tmp->num)
{
tmp1 = tmp;
tmp = tmp->next;
}

if(tmp==*ptr)
{
*ptr = tmp->next;
free(tmp);
}

else if(tmp->next==NULL)
{
tmp1->next = tmp->next;
free(tmp);
}

else
{
tmp1->next = tmp->next;
free(tmp);
}
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
