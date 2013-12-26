#define MAX 0x7fffffff
#include<ctype.h>
#include<stdio.h>
#include<string.h>

int m;	//原进制
int n;	//目标进制
int len;
char s[33];
//int s;
int Input(){
	int flag = 0;

		printf("\n请按要求输入：\n");
		printf("原数据	原进制	目标进制(<=36)\n");
		//scanf("%d%d%d",&s,&m,&n);
		//get();
		scanf("%s%d%d",s,&m,&n);
		if(m > 36 || n >36){
			printf("\aERROR:进制超出范围（1~36）！\n");
			flag++;
		}
		if(m == n){
			printf("\aERROR：原进制与目标进制相同！\n");
			//continue;
			flag++;
		}
		len = strlen(s);
		int i;
		for(i = 0;i < len ;i++){
			int t = s[i];
			if(isalnum(t))
				break;
		}//if
		if(i != len){
			printf("\aERROR:原数据不合法\n");
			flag++;
		}
		return flag;
}



void Convert(char *s){
	int i = 0;
	while(s[i]){
		if(s[i] >= 'a' && s[i] <= 'z')
			s[i] = s[i]-'a'+10;		//字符转换为对应的数字
		else if(s[i] >= 'A' && s[i] <= 'Z')
			s[i] = s[i]-'A'+10;
		else
			s[i] -='0';	//将数字转化为ASCII码值
		i++;
	}
}