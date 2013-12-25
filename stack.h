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
//void conservasion(Stack &S,int R,int N,int &e);
void M2X(int s,int m,int n);


int InitStack(Stack &S){
	S.base = (int *)malloc(INIT_SIZE * sizeof(int));
	if(!S.base)
		exit(0);

	S.top = S.base;
	S.stacksize = INIT_SIZE;
	return OK;
}

int Push(Stack &S,int e){
	//if()
	*S.top = e;
	S.top++;
	return OK;
}


int Pop(Stack &S,int &e){

	S.top--;
	e = *S.top;
	return OK;
}

int Empty(Stack &S){
	return S.top == S.base ;
}


//void M2D(int &s,int m,int n,int &e){
//void M2X_st(int s,int m,int n){
void M2X_st(int s){
	Stack S;
	int e;
	InitStack(S);

	while(s){
		Push(S,s % n);
		s = s / n;
	}

	while(!Empty(S)){
		Pop(S,e);
		if(e < 10)
			printf("%d",e);
		else{
			e = e+55;		//转化为对应字母的ASCII码值
							//另一种表达:e = e-10+'A' );
			printf("%c\n",e);
		}//else
	}//while
	printf("\n");
}






