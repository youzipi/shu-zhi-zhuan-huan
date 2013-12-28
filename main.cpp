#include"public.h"
#include"array.h"
#include"stack.h"
#include"recursion.h"
//#include<windows.h>
#include<stdio.h>


int main(){
	int x;
	while(1){
		//system("pause");
		//system("cls");
		//printf("\n请按要求输入：\n");
		//printf("原数据	原进制	目标进制(<=36)\n");
		////scanf("%d%d%d",&s,&m,&n);
		////get();
		//scanf("%s%d%d",s,&m,&n);
		//if(m > 36 || n >36){
		//	printf("ERROR:进制范围为（1~36）");
		//	continue;
		//}
		//if(m == n){
		//	printf("原进制与目标进制不可相同");
		//	continue;
		//}
		//len = strlen(s);
		//for(i = 0;i <len;i++)
			//if()
		int flag = Input();
		if(flag)
			continue;
		Convert(s);
		x = M2D_ar(len);
		printf("\n10进制	         ：%d",x);

		//M2X(s,m,10);
		printf("\n%d进制（数组实现）：",n);
		M2X_ar(x);
		printf("\n%d进制（栈实现）  ：",n);
		M2X_st(x);
		printf("\n%d进制（递归实现）：",n);
		M2X_rec(x);
	}
	return 0;
}








