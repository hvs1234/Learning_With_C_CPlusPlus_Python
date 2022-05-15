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
	n *root = malloc(sizeof(n));
	root->data = data;
	printf("%d ",root->data);
	root->left = NULL;
	root->right = NULL;
}
void preorder(n *root)
{
	if(root!=NULL){
		printf("%d ",root->data);
		preorder(root->left);
		preorder(root->right);
	}
}
void inorder(n *root)
{
	if(root!=NULL){
		preorder(root->left);
		printf("%d ",root->data);
		preorder(root->right);
	}
}
void postorder(n *root)
{
	if(root!=NULL){
		preorder(root->left);
		preorder(root->right);
		printf("%d ",root->data);
	}
}
int isBST(n *root)
{
	static n *prev = NULL;
	if(root!=NULL){
		if(!(isBST(root->left))) return 0;
		if(prev!=NULL && root->data<=prev->data) return 0;
		prev = root;
		return isBST(root->right);
	}
	else return 1;
}
int main()
{
    n *p = cn(4);
	n *p1 = cn(2);
	n *p2 = cn(6);
	p->left = p1;
	p->right = p2;
	printf("\n\n");
	if(isBST(p)) printf("\n\nIt is Binary Search Tree ...");
	else printf("\n\nIt is not a Binary Search Tree ...");
	return 0;
}
