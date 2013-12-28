#include<stdio.h>
#include<stdlib.h>
#define INIT_SIZE 100
#define OK 1

typedef struct{
	int *base;
	int *top;
	int stacksize;
} Stack;

int InitStack(Stack &S);
int Empty(Stack &S);
int Push(Stack &S,int e);
int Pop(Stack &S,int &e);

void M2X_st(int x);

//��ʼ��ջ
int InitStack(Stack &S){
	S.base = (int *)malloc(INIT_SIZE * sizeof(int));
	if(!S.base)
		exit(0);

	S.top = S.base;
	S.stacksize = INIT_SIZE;
	return OK;
}
//��ջ
int Push(Stack &S,int e){
	*S.top = e;
	S.top++;
	return OK;
}

//��ջ
int Pop(Stack &S,int &e){

	S.top--;
	e = *S.top;
	return OK;
}
//�ж�ջ�Ƿ�Ϊ��
int Empty(Stack &S){
	return S.top == S.base ;
}

//ջʵ��10������xת��Ϊn������
//������x:ԭ���ݶ�Ӧ��ʮ������x
void M2X_st(int x){
	Stack S;
	int e;
	InitStack(S);

	while(x){
		Push(S,x % n);
		x = x / n;
	}

	while(!Empty(S)){
		Pop(S,e);
		if(e < 10)
			printf("%d",e);
		else{
			e = e+55;		//ת��Ϊ��Ӧ��ĸ��ASCII��ֵ
			printf("%c",e);
		}//else
	}//while
}






