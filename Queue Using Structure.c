#include<stdio.h>
#include<stdlib.h>
struct queue
{
	int size; int r;
	int f; int *arr;
};
int isempty(struct queue *q)
{
	if(q->r==q->f) return 1;
	else return 0;
}
int isfull(struct queue *q)
{
	if(q->r==q->size-1) return 1;
	else return 0;
}
void enqueue(struct queue *q, int v)
{
	if(isfull(q)) printf("\n\nQueue is full!--- ");
	else{
	    printf("\n\nEnter the value: "); scanf("%d",&v);
		q->r++;
		q->arr[q->r] = v;
		printf("Element %d inserted--- ",v);
	}
}
int dequeue(struct queue *q)
{
    int v = -1;
	if(isempty(q)) { printf("\n\nQueue is empty!--- "); return -1; }
	else{
		q->f++;
		v = q->arr[q->f];
		return v;
	}
}
int main()
{
    int ch,v;
    struct queue *sp = (struct queue *)malloc(sizeof(struct queue));
	sp->size=100;  sp->r=sp->f=0;
	sp->arr = (int *)malloc(sp->size*sizeof(int));
	do{
		printf("\n\nWelcome to queue--- 0.exit, 1.push, 2.pop");
		printf("\n\nEnter your choice!--- "); scanf("%d",&ch);
		switch(ch)
		{
			case 0: break;  case 1: { enqueue(sp,v); break; }  case 2: { dequeue(sp); break; }
			default: { printf("\n\nInvalid choice!--- "); break; }
		}
	} while(ch);
	if(isempty(sp)) printf("\n\nQueue is empty!--- ");
	else printf("\n\nQueue is not empty!--- ");
	return 0;
}
