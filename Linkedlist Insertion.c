#include<stdio.h>
#include<stdlib.h>
struct node 
{
	int data ; struct node *next;
};
void linkedlist(struct node *ptr)
{
	int i=0; 
	do { printf("\n\nElement at index %d is: %d",i,ptr->data); i++; ptr = ptr->next; } while(ptr!=NULL);
}
struct node *insertatfirst(struct node *f, int data)
{
	int i=0; struct node *ptr = (struct node *)malloc(sizeof(struct node));
	ptr->next = f;
	ptr->data = data;
	return ptr;
}
struct node *insertatindex(struct node *f, int data, int index)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
	struct node *p = f;  int i=0;
	while(i!=index-1){
		p = p->next; i++;
	}  ptr->data = data;  ptr->next = p->next;  p->next = ptr;
	return f;
}
struct node *insertatlast(struct node *f, int data)
{
	struct node *ptr = (struct node *)malloc(sizeof(struct node));
	struct node *p = f;  ptr->data = data;
	while(p->next!=NULL){
		p = p->next;
	} p->next = ptr;  ptr->next = NULL;
	return f;
}
int main()
{
    struct node *f;  struct node *s;  struct node *t;
	f = (struct node *)malloc(sizeof(struct node));  s = (struct node *)malloc(sizeof(struct node));
	t = (struct node *)malloc(sizeof(struct node));
	f->data = 7;  f->next = s;
	s->data = 92; s->next = t;
	t->data = 56; t->next = NULL;
	printf("Given Linkedlist is--- ");  
	linkedlist(f);  int data;  printf("\n\nEnter the data--- "); scanf("%d",&data);
	printf("\n\nLinkedlist after insert %d at first index--- ",data); f = insertatfirst(f,data);
	linkedlist(f);
	int index;  printf("\n\nEnter the index which you want to insert %d in it--- ",data);  scanf("%d",&index);
	printf("\n\nLinkedlist after insert %d at %d index--- ",data,index); f = insertatindex(f,data,index);
	linkedlist(f);
	printf("\n\nLinkedlist after insert %d at last index--- ",data);  f = insertatlast(f,data);
	linkedlist(f);
	return 0;
}
