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

void main()
{
int ans;
char ch;
SLL *head = 0;
do
{
printf("Do you want to add to:\n1) Beginning\n2) End\n");
scanf(" %d",&ans);
if(ans==1)
add_begin(&head);
else
add_end(&head);
print(head);
printf("Do you want to add again?\n");
scanf(" %c",&ch);
}while(ch=='y' || ch=='Y');

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
