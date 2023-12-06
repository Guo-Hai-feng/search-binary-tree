#define OK 1
#define ERROR 0
#include<stdio.h>
#include<malloc.h>
#include<math.h>
typedef int KeyType;
typedef char InfoType;
typedef struct
{
	KeyType key;//关键字项
	InfoType otherinfo;//其他数据项
}ElemType;


/*二叉树的链式存储*/
typedef struct BiNode
{
	ElemType data;
	struct BiNode* lchild, * rchild;//左右孩子指针

}BiNode,*BiTree;


//二叉排序树的递归查找
BiTree SearchBST(BiTree T, KeyType key);

//插入节点
BiTree Insert(BiTree T, BiNode a);





