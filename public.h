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
	//fflush(stdin);

	printf("\n请按要求输入：\n");
	printf("原数据	原进制	目标进制（<=36）\n");
	flushall();		//清空缓存区
	//scanf("%d%d%d",&s,&m,&n);
	//get();
	//f = ;
	if(3 != scanf("%s%d%d",s,&m,&n)){	//
		printf("\aERROR01:输入错误！\n");
		flag++;
		return flag;
	}

	if(m > 36 || n >36){
		printf("\aERROR02:进制超出范围（1~36）！\n");
		flag++;
		return flag;
	}
	len = strlen(s);
	int i;
	for(i = 0;i < len ;i++){
		int t = s[i];
		if(!isalnum(t)){
			printf("\aERROR03:原数据不合法\n");
			printf("合法数据：（a~z,A~Z,0~9）\n");
			flag++;
			return flag;
		}

		if(isdigit(t)){
			if( t >= (m + '0' - 1)){
				printf("\aERROR04:原数据超出原进制\n");
				flag++;
				return flag;
			}
		}
		if(isalpha(t)){
			t = toupper(t);
			if(t >= (m - 10 + 'A')){
				printf("\aERROR04:原数据超出原进制\n");
				flag++;
				return flag;
			}
		}
	}//if
	//if(i != len){
	//	printf("\aERROR:原数据不合法\n");
	//	//printf("合法数据：（a~z,A~Z,0~9）\n");
	//	flag++;
	//}
	if(m == n){
		printf("\aERROR05：原进制与目标进制相同！\n");
		//continue;
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