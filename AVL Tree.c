#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
    int data;
    struct node *left;
    struct node *right;
    int height;
} n;
n *cn(int data)
{
    n *ptr = malloc(sizeof(n));
    ptr->data = data;
    ptr->left = NULL;
    ptr->right = NULL;
    ptr->height = 1;
    return ptr;
}
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
    return ptr->height;
}
int getbalancefactor(n *ptr)
{
    if(ptr==NULL) return 0;
    return getheight(ptr->left) - getheight(ptr->right);
}
int max(int a, int b) { return (a>b)?a:b; }
n *rightrotate(n *y)
{
    n *x = y->left;
    n *T2 = x->right;
    x->right = y;
    y->left = T2;
    x->height = max(getheight(x->right),getheight(x->left))+1;
    y->height = max(getheight(y->right),getheight(y->left))+1;
    return x;
} 
n *leftrotate(n *x)
{
    n *y = x->right;
    n *T2 = y->left;
    y->left = x;
    x->right = T2;
    x->height = max(getheight(x->right),getheight(x->left))+1;
    y->height = max(getheight(y->right),getheight(y->left))+1;
    return y;
}
n *insert(n *root, int data)
{
    if(root==NULL) return cn(data);
    if(data<root->data) root->left = insert(root->left,data);
    else if(data>root->data) root->right = insert(root->right,data);
    root->height = 1+max(getheight(root->left),getheight(root->right));
    int bf = getbalancefactor(root);
    if(bf>1 && data<root->left->data) return rightrotate(root);
    if(bf<-1 && data>root->right->data) return leftrotate(root);
    if(bf>1 && data>root->left->data){
        root->left = leftrotate(root->left);
        return rightrotate(root);
    } 
    if(bf<-1 && data<root->right->data){
        root->right = rightrotate(root->right);
        return leftrotate(root);
    }
    return root;
}  
int main()
{
    n *root = NULL;
    root = insert(root,12);  root = insert(root,2);  root = insert(root,6);  root = insert(root,21);
    root = insert(root,34);
    preorder(root);
    if(getbalancefactor(root)) printf("\n\nAVL Tree ...");
    else printf("\n\nNot AVL Tree ...");
    return 0; 
}
