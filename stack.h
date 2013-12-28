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

//初始化栈
int InitStack(Stack &S){
	S.base = (int *)malloc(INIT_SIZE * sizeof(int));
	if(!S.base)
		exit(0);

	S.top = S.base;
	S.stacksize = INIT_SIZE;
	return OK;
}
//入栈
int Push(Stack &S,int e){
	*S.top = e;
	S.top++;
	return OK;
}

//出栈
int Pop(Stack &S,int &e){

	S.top--;
	e = *S.top;
	return OK;
}
//判断栈是否为空
int Empty(Stack &S){
	return S.top == S.base ;
}

//栈实现10进制数x转化为n进制数
//参数：x:原数据对应的十进制数x
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
			e = e+55;		//转化为对应字母的ASCII码值
			printf("%c",e);
		}//else
	}//while
}






