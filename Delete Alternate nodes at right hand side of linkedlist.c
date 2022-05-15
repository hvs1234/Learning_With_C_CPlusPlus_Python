#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
	int data;
	struct node *next;
} n;
void linkedlist(n *ptr) { do { printf("\n\n%d ",ptr->data); ptr = ptr->next; } while(ptr!=NULL); }
n *insertright(n *head, int data)
{
	n *ptr = malloc(sizeof(n));
	n *p = head; ptr->data = data;
	while(p->next!=NULL) { p = p->next; } p->next = ptr; ptr->next = NULL; return head;
}
void deletealternate(n *head)
{
	if(head==NULL) return; n *prev = head; n *ptr = head->next;
	while(prev!=NULL && ptr!=NULL) { prev->next = ptr->next; free(ptr); prev = prev->next; 
	    if(prev!=NULL) ptr = prev->next; }
 }
int main()
{
	
	n *f;  n *s;  n *t;  n *fth;
	f = malloc(sizeof(n));  s = malloc(sizeof(n));  t = malloc(sizeof(n));  fth = malloc(sizeof(n));
	f->data = 21;  f->next = s;  s->data = 67;  s->next = t;  t->data = 94; t->next = fth;
	fth->data = 78;  fth->next = NULL;
	linkedlist(f);  printf("\n\nLinkedlist after insert 34 at right hand side ---");
	f = insertright(f,34);  linkedlist(f);
	deletealternate(f); printf("\n\nDelete alternate nodes ---");
	linkedlist(f);
	return 0;
}
