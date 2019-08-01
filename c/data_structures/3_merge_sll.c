#include<stdio.h>
#include<stdlib.h>
typedef struct data
{
int num;
struct data *next;
}SLL;

void add_end(SLL **);
void print(SLL *);
void add_begin(SLL **);
void merge(SLL **,SLL **);

void main()
{
int ans;
char ch;
SLL *head1 = 0;
SLL *head2 = 0;
do
{
printf("Enter 1st LL data\n");
add_begin(&head1);

printf("Enter 2nd LL data\n");
add_begin(&head2);

printf("Do you want to add again?\n");
scanf(" %c",&ch);
}while(ch=='y' || ch=='Y');

printf("do you want to merge LL?\n");
scanf(" %c",&ch);
if(ch=='y' || ch=='Y')
{
merge(&head1,&head2);
print(head1);
}
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

void add_end(SLL **ptr)
{
SLL *new = malloc(sizeof(SLL));
printf("Enter the number\n");
scanf(" %d",&new->num);

if(*ptr==NULL)
{
new->next = *ptr;
*ptr = new;
}
else
{
SLL *end = *ptr;
while(end->next)
{
end = end->next;
}
new->next = end->next;
end->next = new;
}

}

void merge(SLL **ptr1, SLL **ptr2)
{
SLL *last = *ptr1;
while(last->next)
last = last->next;

last->next = *ptr2;
}
