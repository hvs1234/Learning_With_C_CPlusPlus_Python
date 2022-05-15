#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data; struct node *next;
};
struct node *f = NULL; struct node *r = NULL;
void linkedlist(struct node *ptr)
{
	do{
		printf("\n\nElement is: %d",ptr->data);
		ptr = ptr->next;
	} while(ptr!=NULL);
}
void enqueue(int data)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
	if(ptr==NULL) printf("\n\nQueue is full!--- ");
	else{
	    printf("\n\nEnter the value: "); scanf("%d",&data);
		ptr->data = data;
		ptr->next = NULL;
		if(f==NULL) f=r=ptr;
		else{
			r->next = ptr;
			r = ptr;
		}
	}
}
int dequeue()
{
    int v=-1; struct node *ptr = f;
	if(f==NULL) printf("\n\nQueue is empty!--- ");
	else{
		f = f->next;
		int v = ptr->data;
		free(ptr);
	}
	return v;
}
int main()
{
	int ch,v;
	do{
		printf("\n\nWlcome to queue--- 0.exit, 1.enqueue and print, 2.deueue");
		printf("\n\nEnter your choice: "); scanf("%d",&ch);
		switch(ch)
		{
			case 0: break;  case 1: { enqueue(v); linkedlist(f); break; }  
			case 2: { dequeue(); break; }
			default: { printf("\n\nInvalid choice!--- "); break; }
		}
	} while(ch);
    return 0;
}
