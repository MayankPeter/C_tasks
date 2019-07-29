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
void rem_duplicate_unsorted(SLL **);

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

	rem_duplicate_unsorted(&head);

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

void rem_duplicate_unsorted(SLL **ptr)
{
SLL *cur = *ptr, *tmp = cur->next, *prev = cur;
while(cur)
{
while(tmp)
{
printf("tmp -> num = %d\n",tmp->num);
printf("\n");
print(*ptr);
if(cur->num==tmp->num)
{
prev->next = tmp->next;
free(tmp);
printf("prev -> num = %d\n",prev->num);
}
prev = tmp;
tmp = prev->next;////////
}
cur = cur->next;
tmp = cur->next;///////////// 
printf("%d %d\n",cur,tmp);
}
}
