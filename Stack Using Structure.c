#include<stdio.h>
#include<stdlib.h>
struct stack
{
	int size; 
	int top;
	int *arr;
};
int isempty(struct stack *ptr)
{
	if(ptr->top==-1) return 1;
	else return 0;
}
int isfull(struct stack *ptr)
{
	if(ptr->top==ptr->size-1) return 1;
	else return 0;
}
void push(struct stack *ptr, int v)
{
	if(isfull(ptr)) printf("\n\nStack overflow!--- ");
	else{
		printf("Enter the value: "); scanf("%d",&v);
		ptr->top++;
		ptr->arr[ptr->top] = v;
	}
}
int pop(struct stack *ptr)
{
	if(isempty(ptr)) { printf("\n\nStack underflow!--- "); return -1; }
	else{
		int v = ptr->arr[ptr->top];
		ptr->top--;
		return v;
	}
}
int peek(struct stack *ptr, int i)
{
	int ai = ptr->top -i + 1;
	if(ai<0) { printf("\n\nNot a valid position:"); return -1; }
	else{
		return ptr->arr[ai];
	}
} 
int main()
{
    struct stack *sp = (struct stack *)malloc(sizeof(struct stack)); int V;
	sp->size=100;
	sp->top=-1;
	sp->arr = (int *)malloc(sp->size*sizeof(int));
	int ch;
	do{
		printf("\n\nWelocme to stack!--- 0.exit, 1.push, 2.pop, 3.peek");
		printf("\n\nEnter your choice: "); scanf("%d",&ch);
		switch(ch)
		{
			case 0: break;  case 1: { push(sp,V); break; }  case 2: { pop(sp); break; }
			case 3: { int j; for(int j=1;j<=sp->top+1;j++) { printf("\n\nValue at index %d is: %d",j,peek(sp,j)); } break; }
			case 4: { printf("\n\nInvalid Choice!--- "); }
		}
	} while(ch);
	return 0;
}
