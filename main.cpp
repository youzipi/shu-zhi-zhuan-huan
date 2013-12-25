#include"public.h"
#include"array.h"
#include"stack.h"
#include<windows.h>
#include<stdio.h>

int main(){
	int x;
	while(1){
		//system("pause");
		//system("cls");
		printf("\n请按要求输入：\n");
		printf("原数据	原进制	目标进制(<=36)\n");
		//scanf("%d%d%d",&s,&m,&n);
		scanf("%s%d%d",s,&m,&n);

		if(m > 36 || n >36)
			printf("进制范围为（1~36）");
		len = strlen(s);
		//for(i = 0;i <len;i++)
			//if()
		Convert(s);
		x = M2D_ar(len);
		printf("\n10进制	：%d",x);

		//M2X(s,m,10);
		printf("\n%d进制 数组实现：",n);
		M2X_ar(x);
		printf("\n%d进制 栈实现：",n);
		M2X_st(x);


	}
	return 0;
}








