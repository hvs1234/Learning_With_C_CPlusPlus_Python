#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;  struct node *next;
};
void linkedlist(struct node *ptr)
{
	int i=0;
	do { printf("\n\nElement at index %d is--- %d",i,ptr->data); ptr = ptr->next; i++; } while(ptr!=NULL);
}
struct node *deleteatfirst(struct node *f)
{
	struct node *ptr = f;
	f = f->next;
	free(ptr);  return f;
}
struct node *deleteatindex(struct node *f, int index)
{
    struct node *p = f;  struct node *q = f->next;
	for(int i=0;i<index-1;i++)
	{
		p = p->next;  q = q->next;
	}  p->next = q->next;  free(q);
	return f;
}
struct node *deleteatlast(struct node *f)
{
	struct node *p = f;  struct node * q = f->next;
	while(q->next!=NULL)
	{
		p = p->next;  q = q->next;
	}  p->next = NULL;
	return f;
}
int main()
{
    struct node *f;  struct node *s;  struct node *t;
	f = (struct node *)malloc(sizeof(struct node));  s = (struct node *)malloc(sizeof(struct node));
	t = (struct node *)malloc(sizeof(struct node));
	f->data = 67;  f->next = s;
	s->data = 3;   s->next = t;
	t->data = 88;  t->next = NULL;
	printf("Given linkedlist is--- "); linkedlist(f);
	int index;
	printf("\n\nLinkedlist after delete an element at last index--- "); f = deleteatlast(f);
	linkedlist(f);
	return 0;
}
