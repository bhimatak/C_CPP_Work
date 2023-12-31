/*

Trees - Demo on BST

*/
#include <stdio.h>
#include <stdlib.h>

struct bst
{
	struct bst *lchild;
	int val;
	struct bst *rchild;		
};

typedef struct bst BST;

BST *newNode(int);

BST *insert(BST *, int);

void postorder(BST *);
void inorder(BST *);
void preorder(BST *);

int main()
{
	int a[] = {50,20,80,10,40,60,90,30,70};
	int i;
	BST *root = NULL;

	for(i=0;i<(sizeof(a)/sizeof(a[0]));i++)
		root = insert(root,a[i]);

	printf("\n===Inorder Traversal\n====");
	inorder(root);
	printf("\n===Preorder Traversal\n====");
	preorder(root);
	printf("\n===Postorder Traversal\n====");
	postorder(root);

	printf("\n\n");
	return 0;
}

BST *newNode(int value)
{
	BST *nn = (BST *)malloc(sizeof(BST));
	if(nn == NULL)
	{
		printf("\nUnable to allocate memory\n");
		exit(EXIT_FAILURE);
	}

	nn->val = value;
	nn->lchild = nn->rchild = NULL;

	return (nn);
}

BST *insert(BST *root, int val)
{
		if(root == NULL)
			return newNode(val);
		else if(val < root->val)
			root->lchild = insert(root->lchild, val);
		else
			root->rchild = insert(root->rchild, val);

		return root;
}

void inorder(BST *root)
{
	if(root != NULL)
	{
		inorder(root->lchild);
		printf(" %d ",root->val);
		inorder(root->rchild);
	}
}


void preorder(BST *root)
{
	if(root != NULL)
	{
		printf(" %d ",root->val);
		preorder(root->lchild);
		preorder(root->rchild);
	}
}

void postorder(BST *root)
{
	if(root != NULL)
	{
		
		preorder(root->lchild);
		preorder(root->rchild);
		printf(" %d ",root->val);
	}
}