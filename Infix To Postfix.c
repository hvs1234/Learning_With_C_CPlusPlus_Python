#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct stack 
{
	int size; int top; char *arr;
};
int stacktop(struct stack *sp) { return sp->arr[sp->top]; }
int isempty(struct stack *ptr)
{
	if(ptr->top==-1) return 1; else return 0;
}
int isfull(struct stack *ptr) { if(ptr->top==ptr->size-1) return 1; else return 0; }
void push(struct stack *ptr, int v) { if(isfull(ptr)) { printf("\nStack overflow!---"); }
           else { ptr->top++; ptr->arr[ptr->top] = v; } }
char pop(struct stack *ptr) { if(isempty(ptr)) { printf("\nStack underflow!---"); return -1; } 
               else { char v = ptr->arr[ptr->top]; ptr->top--; return v; } }
int precedence(char ch) { if(ch=='*' || ch=='/') return 3; else if(ch=='+' || ch=='-') return 2; else return 0; }
int isoperator(char ch) { if(ch=='+' || ch=='-' || ch=='*' || ch=='/') return 1; else return 0; }
char* infixtopostfix(char* infix){
	struct stack *sp = (struct stack *)malloc(sizeof(struct stack));
	sp->top=-1; printf("\nEnter the size: "); scanf("%d",&sp->size);
	sp->arr = (char *)malloc(sp->size*sizeof(char));
	char * postfix = (char *)malloc((strlen(infix)+1)*sizeof(char)); int i=0,j=0;
	while(infix[i]!='\0'){
		if(!isoperator(infix[i]))
		{
			postfix[j] = infix[i]; j++; i++;
		}
		else { 
		    if(precedence(infix[i])>precedence(stacktop(sp))) { push(sp,infix[i]); i++; }
			else { postfix[j] = pop(sp); j++; }
		}
	}
	while(!isempty(sp)){
	     postfix[j] = pop(sp); j++;
	}
	postfix[j] = '\0'; return postfix;
}
int main()
{
	char * infix = "x-y/z-k*a";
	printf("Infix to postfix conversion is: %s",infixtopostfix(infix));
	return 0;
}
