#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#define MAX 100
void push(int p)
{
	char stack[100],infix[100],prefix[100]; int top=-1; 
    if(top==MAX-1) printf("\nStack overflow!--- ");
	else{
		top++;
		stack[top] = infix[p];
	}
}
char pop()
{
	char stack[100],infix[100],prefix[100]; int top;
    char ch;
	if(top<0) { printf("\nStack underlfow!--- "); exit(0); }
	else{
        ch = stack[top];
		stack[top] = '\0';
		top--;
	    return ch;
	} return 0;
}
int precedence(char ch)
{
	if(ch=='+' || ch=='-') return 1;
	if(ch=='*' || ch=='/') return 2;
    return 0;
}
void infixtoprefix()
{
    char stack[100],infix[100],prefix[100]; int top=-1;
	strrev(infix); int i=0,j=0;
	while(infix[i]!='\0')
	{
		if(infix[i]>='a' && infix[i]<='z')
		{
			prefix[j] = infix[i]; j++; i++;
		}
		else if(infix[i]==')' || infix[i]=='}' || infix[i]==']')
		{
			push(i); i++;
		}
		else if(infix[i]=='(' || infix[i]=='{' || infix[i]=='[')
		{
			if(infix[i]=='(')
			{
				while(stack[top]!=')')
				{
					prefix[j] = pop(); j++;
				}
				pop(); i++;
			}
			else if(infix[i]=='[')
			{
				while(stack[top]!=']')
				{
					prefix[j] = pop(); j++;
				}
				pop(); i++;
			}
			else if(infix[i]=='{')
			{
				while(stack[top]!='}')
				{
					prefix[j] = pop(); j++;
				}
				pop(); i++;
			}
		}
		else{
			if(top==-1)
			{
				push(i); i++;
			}
			else if(precedence(infix[i])<precedence(stack[top]))
			{
				prefix[j] = pop(); j++;
				while(precedence(stack[top])>precedence(infix[i]))
				{
					prefix[j] = pop(); j++;
					if(top<0) break;
				}
				push(i); i++;
			}
			else if(precedence(infix[i])>=precedence(stack[top]))
			{
				push(i); i++;
			}
		}
	}
	while(top!=-1)
	{
		prefix[j] = pop(); j++;
	}
	strrev(prefix);
	prefix[j] = '\0';  printf("\nInfix to Prefix conversion is--- %s",prefix);
}
int main()
{
	char infix[100]; printf("Enter infix expression: ");
	scanf("%s",infix);
	printf("\nPrefix expression is: ");
	infixtoprefix();
	return 0;
}
