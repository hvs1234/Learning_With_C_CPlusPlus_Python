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
	ptr->left = NULL;
	ptr->right = NULL;
	return ptr;
}
n *searchITR(n *root, int data)
{	while(root!=NULL){
		if(data==root->data) return root;
		else if(data<root->data) root = root->left;
		else root = root->right;
	}
	return NULL;
}
int main()
{
    n *p = cn(6);
	n *p1 = cn(3);
	n *p2 = cn(10);  n *p3 = cn(12);  n *p4 = cn(16);  n *p5 = cn(9);
	p->left = p1;
	p->right = p2; p->right->left = p5; p->right->right = p3;  p->right->right->right = p4;
	n *N = searchITR(p,9);
	if(N!=NULL) printf("\n\nFound: %d",N->data);
	else printf("\n\nNot found ...");
	return 0;
}
