#include"public.h"
#include"array.h"
#include"stack.h"
#include"digui.h"
//#include<windows.h>
#include<stdio.h>
#include<string.h>

int main(){
	int x;
	while(1){
		//system("pause");
		//system("cls");
		printf("\n�밴Ҫ�����룺\n");
		printf("ԭ����	ԭ����	Ŀ�����(<=36)\n");
		//scanf("%d%d%d",&s,&m,&n);
		//get();
		scanf("%d%d%d",s,&m,&n);
		if(m > 36 || n >36){
			printf("ERROR:���Ʒ�ΧΪ��1~36��");
			continue;
		}
		if(m == n){
			printf("ԭ������Ŀ����Ʋ�����ͬ");
			continue;
		}
		//len = strlen(s);
		//printf("%d",len);
		//for(i = 0;i <len;i++)
			//if()
		Convert(s);
		x = M2D_ar(len);
		printf("\n10����	��%d",x);

		//M2X(s,m,10);
		printf("\n%d���� ����ʵ�֣�",n);
		M2X_ar(x);
		printf("\n%d���� ջʵ�֣�",n);
		M2X_st(x);
		printf("\n%d���� �ݹ�ʵ�֣�",n);
		M2X_dg(x);
	}
	return 0;
}








