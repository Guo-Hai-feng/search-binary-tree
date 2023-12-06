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
		InOrderTraverse(T->lchild);//�ݹ����������
		visit(T);//���ʸ��ڵ�
		InOrderTraverse(T->rchild);//�ݹ����������
	}
}




//��ʽ�������Ĵ���
BiTree CreaBiTree()
{
	int in;
	char ch;
	printf("������ؼ����������������,����-1�ؼ��ֱ�ʾ�սڵ�\n");
	scanf("%d,%c", &in, &ch);

	//�������-1����ʾ�սڵ�
	if (in == -1)
	{
		return NULL;
	}

	//������ǰ�ڵ�
	BiTree node = (BiTree)malloc(sizeof(BiNode));
	node->data.key = in;
	node->data.otherinfo = ch;

	//�ݹ鹹����������������
	printf("Ϊ�ڵ�%d������������\n", in);
	node->lchild = CreaBiTree();
	printf("Ϊ�ڵ�%d������������\n", in);
	node->rchild = CreaBiTree();
	return node;
}

	


