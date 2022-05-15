#include<stdio.h>
int push(int a[], int top, int MAX)
{
	if(top==MAX-1)
	{
		printf("\n\nStack overflow!--- ");
	}
	else{
	    printf("\n\nEnter the value--- ");
	    scanf("%d",&a[++top]);
	}
	return top;
}
int pop(int a[], int top, int MAX)
{
	if(top==-1){
		printf("\n\nStack underflow!--- ");
		return -1;
	}
	else{
		printf("\n\nElement %d be deleted--- ",a[top--]);
	}
    return top;
}
int peek(int a[], int top, int MAX)
{
    if(top==-1)
	{
		printf("\n\nStack empty!--- ");
	}
	else{
		printf("\n\nElement %d on top: ",a[top]);
	}
	return top;
}
void display(int a[], int top, int MAX)
{
	if(top==-1)
	{
		printf("\n\nStack empty!--- ");
	}
	else{
		for(int i=top;i>-1;i--)
		{
			printf("\n%d ",a[i]);
		}
	}

}
int main()
{
    int MAX=20; int top=-1,a[20]; int ch;
	do{
		printf("Welcome To Stack!--- 0.exit, 1.push, 2.pop, 3.peek, 4.display--- ");
		printf("\n\nEnter your choice: ");  scanf("%d",&ch);
		switch(ch)
		{
			case 0: break;
		    case 1: { top = push(a,top,MAX); break; }  case 2: { top = pop(a,top,MAX); break; }  
			case 3: { top = peek(a,top,MAX); break; }
			case 4: { display(a,top,MAX); break; }  
			default: { printf("\n\nInvalid Choice!--- "); break;}
		}
	} while(ch);
	return 0;
}
