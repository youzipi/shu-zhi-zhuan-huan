#include"public.h"
#include"array.h"
#include"stack.h"
#include"recurision.h"
#include<stdio.h>

int main(){
	int x;
	while(1){
		int flag = Input();
		if(flag)		//是否检测到错误
			continue;
		Convert(s);
		x = M2D_ar(len);
		printf("\n10进制	          ：%d",x);

		printf("\n%d进制（数组实现）：",n);
		M2X_ar(x);
		printf("\n%d进制（栈实现）  ：",n);
		M2X_st(x);
		printf("\n%d进制（递归实现）：",n);
		M2X_rec(x);
	}
	return 0;
}








