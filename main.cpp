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
		//printf("\n�밴Ҫ�����룺\n");
		//printf("ԭ����	ԭ����	Ŀ�����(<=36)\n");
		////scanf("%d%d%d",&s,&m,&n);
		////get();
		//scanf("%s%d%d",s,&m,&n);
		//if(m > 36 || n >36){
		//	printf("ERROR:���Ʒ�ΧΪ��1~36��");
		//	continue;
		//}
		//if(m == n){
		//	printf("ԭ������Ŀ����Ʋ�����ͬ");
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
		printf("\n10����	         ��%d",x);

		//M2X(s,m,10);
		printf("\n%d���ƣ�����ʵ�֣���",n);
		M2X_ar(x);
		printf("\n%d���ƣ�ջʵ�֣�  ��",n);
		M2X_st(x);
		printf("\n%d���ƣ��ݹ�ʵ�֣���",n);
		M2X_rec(x);
	}
	return 0;
}








