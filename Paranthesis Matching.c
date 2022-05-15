#include<stdio.h>
#include<stdlib.h>
struct stack
{
	int size; int top; char *arr;
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
void push(struct stack *ptr,int v)
{
    if(isfull(ptr)) { printf("\n\nStack overflow!--- "); }
	else{
		ptr->top++;
		ptr->arr[ptr->top] = v;
	}
}
char pop(struct stack *ptr)
{
	if(isempty(ptr)) { printf("\n\nStack undeflow!--- "); return -1; }
	else{
		char v = ptr->arr[ptr->top];
		ptr->top--;
		return v;
	}
}
int prm(char *exp)
{
	int i=0;
	struct stack *sp = (struct stack *)malloc(sizeof(struct stack));
	sp->size = 100;  sp->top=-1; sp->arr = (char *)malloc(sp->size*sizeof(char));
	for(int i=0;exp[i]!='\0';i++)
	{
		if(exp[i]=='(') push(sp,'(');
		else if(exp[i]==')'){
			if(isempty(sp)) return 0;
			pop(sp);
		}
	}
	if(isempty(sp)) return 1;
	else return 0;
}
int main()
{
    char * e = "(3-2/1)+((8*7(12/56))";
	if(prm(e)) printf("\n\nParanthesis is matching");
	else{
		printf("\n\nParanthesis is not matching");
	}
	return 0;
}
