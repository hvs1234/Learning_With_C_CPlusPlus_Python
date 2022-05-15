#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
	int data;
	struct node *left;
	struct node *right;
	int height;
} n;
void preorder(n *root)
{
	if(root!=NULL){
		printf("%d ",root->data);
		preorder(root->left);
		preorder(root->right);
	}
}
int getheight(n *ptr)
{
	if(ptr==NULL) return 0;
	else{
		return ptr->height;
	}
}
int getcount(n *root)
{
	if(root==NULL) return 0;
	if(root->left==NULL && root->right==NULL) return 1;
	return getcount(root->left) + getcount(root->right);
}
n *cn(int data)
{
	n *ptr = (n *)malloc(sizeof(n));
	ptr->data = data;
	ptr->left = NULL;
	ptr->right = NULL;
	ptr->height = 1;
	return ptr;
}
n *insert(n *root, int data)
{
	if(root==NULL) root = cn(data);
    else if(data<root->data) root->left = insert(root->left,data);
	else if(data>root->data) root->right = insert(root->right,data);
	return root;
}
int main()
{
	n *root = NULL;
	int ch,data;
	do{
		printf("\n\nEnter the choice[1,2,3]: "); scanf("%d",&ch);
		switch(ch){
			case 1: { printf("\n\nEnter the nodes in BST: ");  scanf("%d",&data);
			    root = insert(root,data); break; }
			case 2: { preorder(root); break; }
			case 3: { printf("\n\nTotal no. of leaf nodes is: %d",getcount(root)); break; }
			default: break;
		}
	} while(ch);
	return 0;
}
