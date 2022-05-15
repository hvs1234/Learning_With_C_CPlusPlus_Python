#include<stdio.h>
#include<ctype.h>
int stack[20]; 
int top=-1;
void push(int n)
{
	stack[++top] = n;
}
int pop()
{
	return stack[top--];
}
int main()
{
    char s[20]; printf("Enter the postfix expresseion: "); scanf("%s",&s);
	int n1,n2,n3,N;
	char *ptr;
	ptr = s;
	while(*ptr!='\0')
	{
		if(isdigit(*ptr))
		{
			N = *ptr - 48;
			push(N);
		}
		else{
			n1 = pop(); n2 = pop();
			switch(*ptr)
			{
				case '+': { n3 = n1+n2; break; }  case '-': { n3 = n2-n1; break; }  case '*': { n3 = n1*n2; break; }
				case '/': { n3 = n2/n1; break; } default: { printf("\n\nInvalid Choice!--- "); }
			}
			push(n3);
		}
		ptr++;
	}
	printf("\n\nPostfix Evalution of %s is: %d",s,pop());
	return 0;
}
