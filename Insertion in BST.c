#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
	int data;
	struct node *left;
	struct node *right;
} n;
n *cn(int data)
{
	n *ptr = malloc(sizeof(n));
	ptr->data = data;
	printf("%d ",ptr->data);
	ptr->left = NULL;
	ptr->right = NULL;
	return ptr;
}
void insert(n *root, int data)
{
	n *prev = NULL;
	while(root!=NULL){
		prev = root;
		if(data==root->data) { printf("\n\nCannot insert %d, already in BST",data); return; }
		else if(data<root->data) root = root->left;
		else root = root->right;
	}
	n *new = cn(data);
	if(data<prev->data) prev->left = new;
	else prev->right = new;
}
int main()
{
    n *p = cn(4);  n *p1 = cn(3);  n *p2 = cn(7);  n *p3 = cn(12);
	p->left = p1;  p->right = p2;
	p->right->right = p3;
    p->right->left;
	insert(p,9);
	return 0; 
}
