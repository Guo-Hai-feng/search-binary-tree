#define OK 1
#define ERROR 0
#include<stdio.h>
#include<malloc.h>
#include<math.h>
typedef int Type;
typedef int KeyType;
typedef char InfoType;
typedef struct
{
	KeyType key;//�ؼ�����
	InfoType otherinfo;//����������
}ElemType;


/*����������ʽ�洢*/
typedef struct BiNode
{
	ElemType data;
	struct BiNode* lchild, * rchild;//���Һ���ָ��

}BiNode,*BiTree;


//�����������ĵݹ����
BiTree SearchBST(BiTree T, Type key);






//��ʽ�������������
int InOrderTraverse(BiTree T);





//������
BiTree CreaBiTree(BiTree* T);



