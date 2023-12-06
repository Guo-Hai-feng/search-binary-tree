#define _CRT_SECURE_NO_WARNINGS
#include"tree.h"

//返回的是节点指针
BiTree SearchBST(BiTree T, KeyType key)
{
	if ((!T) || key == T->data.key)
	{
		return T;
	}
	else if (key < T->data.key)
		return SearchBST(T->lchild, key);
	else
		return SearchBST(T->rchild, key);
}

BiTree Createnode(int arr, char ch)
{
	BiTree temp = (BiTree)malloc(sizeof(BiNode));
	if (temp == NULL)
	{
		return NULL;
	}
	temp->data.key = arr;
	temp->data.otherinfo = ch;
	temp->lchild = temp->rchild = NULL;
	return temp;
	
}


BiTree Insert(BiTree T, int arr,char ch)
{
	if (T==NULL)
	{
		return Createnode(arr, ch);
	}

	if (T->data.key > arr)
	{
		T->lchild = Insert(T->lchild, arr, ch);
	}
	else if(arr>T->data.key)
	{
		T->rchild = Insert(T->rchild, arr, ch);
	}

	return T;	
}

int InOrderTraverse(BiTree T)
{
	if (T == NULL)
		return OK;
	else
	{
		InOrderTraverse(T->lchild);//递归遍历左子树
		printf("%d\n", T->data.key);
		InOrderTraverse(T->rchild);//递归遍历右子树
	}
}

void FreeTree(BiTree root) 
{
	if (root != NULL)
	{
		FreeTree(root->lchild);
		FreeTree(root->rchild);
		free(root);
	}
}


int main()
{
	int arr[7] = { 45,24,53,45,12,24,90 };
	BiTree T = NULL;
	for (int i = 0; i < 7; i++)
	{
		T = Insert(T, arr[i], 'a');
	}
	InOrderTraverse(T);
	
	FreeTree(T);
	return 0;
}










	


