#define _CRT_SECURE_NO_WARNINGS
#include"tree.h"

BiTree SearchBST(BiTree T, Type key)
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


int visit(BiTree T)
{
	printf("%d", T->data.key);
	printf("%c", T->data.otherinfo);
}


int InOrderTraverse(BiTree T)
{
	if (T == NULL)
		return OK;
	else
	{		
		InOrderTraverse(T->lchild);//递归遍历左子树
		visit(T);//访问根节点
		InOrderTraverse(T->rchild);//递归遍历右子树
	}
}




//链式二叉树的创建
BiTree CreaBiTree()
{
	int in;
	char ch;
	printf("请输入关键字项和其他数据域,输入-1关键字表示空节点\n");
	scanf("%d,%c", &in, &ch);

	//如果输入-1，表示空节点
	if (in == -1)
	{
		return NULL;
	}

	//创建当前节点
	BiTree node = (BiTree)malloc(sizeof(BiNode));
	node->data.key = in;
	node->data.otherinfo = ch;

	//递归构建左子树和右子树
	printf("为节点%d构建左子树：\n", in);
	node->lchild = CreaBiTree();
	printf("为节点%d构建右子树：\n", in);
	node->rchild = CreaBiTree();
	return node;
}

	


