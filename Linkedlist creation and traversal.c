#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
};

void linkedlist(struct node *ptr)
{
     do { printf("\nElement is: %d",ptr->data); ptr = ptr->next; } while(ptr!=NULL);
}
int main()
{
	struct node *f;  struct node *s;  struct node *t;
	f = (struct node *)malloc(sizeof(struct node));
	s = (struct node *)malloc(sizeof(struct node));
	t = (struct node *)malloc(sizeof(struct node));

	printf("Enter the 1 data: "); scanf("%d",&f->data); f->next = s;
    
	printf("\nEnter the 2 data: "); scanf("%d",&s->data); s->next = t;
	
	printf("\nEnter the 3 data: "); scanf("%d",&t->data); t->next = NULL;
	linkedlist(f);
	return 0;
}
