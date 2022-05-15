#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
};
void linkedlist(struct node *ptr)
{
	do
	{
	    printf("\n\nElement is: %d",ptr->data); ptr = ptr->next;
	} while(ptr!=NULL);
}
int isempty(struct node *top)
{
	if(top==NULL) return 1;
	else 0;
}
int isfull(struct node *top)
{
    struct node *p = (struct node *)malloc(sizeof(struct node));
	if(p==NULL) return 1;
	else return 0;
}
struct node *push(struct node *top, int data)
{
	if(isfull(top)) printf("\n\nStack overflow!--- ");
	else{
	    printf("\n\nEnter the value: "); scanf("%d",&data);
		struct node *ptr = (struct node *)malloc(sizeof(struct node));
		ptr->data = data;
		ptr->next = top;
		top = ptr;
		return top;
	}
}
int pop(struct node *top)
{
	if(isempty(top)) { printf("\n\nStack underflow!--- "); return -1; }
	else{
		struct node *ptr = top;
		top = top->next;
		int data = ptr->data;
		free(ptr);
		return data;
	}
}
int peek(int p)
{
	struct node *ptr = top;
	for(int i=0;i<(p-1 && ptr!=NULL);i++)
	{
		ptr = ptr->next;
	}
	if(ptr!=NULL) return ptr->data;
	else return -1;
}
int main()
{
        
        struct node *top = NULL;
	int ch,v,n;
	int e;
	printf("Enter the size of stack: "); scanf("%d",&n);
	do{
		printf("\n\nWelcome to stack--- 0.exit, 1.push, 2.pop, 3.peek");
		printf("\n\nEnter your choice: "); scanf("%d",&ch);
		switch(ch)
		{
			case 0: break;  case 1: { top = push(top,v); linkedlist(top); break; }  
			case 2: { e=pop(top); linkedlist(top); printf("\n\n%d be deleted--- ",e); break; }
			case 3: { int j; for(j=1;j<=n;j++) { printf("%d \n",peek(j)); linkedlist(top); } break; }
			default: { printf("\n\nInvalid choice!--- "); break; }
		}
	} while(ch);
	return 0;
}
