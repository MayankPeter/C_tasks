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
void rev_data(SLL *);
int count(SLL *);

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

	rev_data(head);

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

void print(SLL *ptr)
{
	printf("\n");
	while(ptr)
	{
		printf("%d\n",ptr->num);
		ptr = ptr->next;
	}
}

void rev_data(SLL *ptr)
{
	SLL *p1 = ptr, *p2;
	int c = count(ptr),i,j, tmp, no;
	printf("Enter number no of nodes to swap\n");
	scanf(" %d",&no);

	if(no>(c/2))
	{
		printf("Invalid Input\n");
		return;
	}

	for(i=0;i<no;i++)
	{
		p2 = ptr;
		for(j=0;j<c-1-i;j++)
		{
			p2 = p2->next;
		}

		tmp = p2->num;
		p2->num = p1->num;
		p1->num = tmp;


		p1 = p1->next;
	}
}
