#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
	int data;
	struct node *next;
} n;
n *reverse(n **head)
{
	n *prev = NULL;
	n *ptr = (*head);
	n *next = NULL;
	while(ptr!=NULL){
		next = ptr->next;
		ptr->next = prev;
		prev = ptr;
		ptr = next;
	}
	(*head) = prev;
}
void push(n **head, int data)
{
    n *ptr = malloc(sizeof(n));
	ptr->data = data;
	ptr->next = (*head);
	(*head) = ptr;
}
void print(n *head)
{
	n *ptr = head;
	do{
		printf("\n\n%d ",ptr->data);
		ptr = ptr->next;
	} while(ptr!=NULL);
}
int main()
{
    n *head = NULL;
	push(&head,30);  push(&head,19);  push(&head,27);  push(&head,12);
	printf("Linkedlist is ---"); 
	print(head);
	reverse(&head);
	printf("\n\nReverse linkedlist is ---"); print(head);
	return 0;
}
