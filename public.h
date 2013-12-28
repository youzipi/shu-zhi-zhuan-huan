#include<ctype.h>
#include<stdio.h>
#include<string.h>
int m;	//原进制
int n;	//目标进制
int len;
char s[33];
//int s;
int Input(){
	int flag = 0;	//flag初始化为0

	printf("\n请按要求输入：\n");
	printf("原数据	原进制	目标进制（<=36）\n");
	flushall();		//清空缓存区

//ERROR01:输入错误！
	if(3 != scanf("%s%d%d",s,&m,&n)){
		printf("\aERROR01:输入错误！\n");
		flag++;
		return flag;
	}

//ERROR02:进制超出范围
	if(m > 36 || n >36 || (m < 2) || (n < 2)){
		printf("\aERROR02:进制超出范围（2~36）！\n");
		flag++;
		return flag;
	}

//ERROR03:原数据不合法
//ERROR04:原数据超出原进制
	len = strlen(s);
	int i;
	for(i = 0;i < len ;i++){
		int t = s[i];
		if(!isalnum(t)){		//s[i]是否为字母或数字
			printf("\aERROR03:原数据不合法\n");
			printf("合法数据：（a~z,A~Z,0~9）\n");
			flag++;
			return flag;
		}//if1

		if(isdigit(t)){			//s[i]是否为数字
			if( t >= (m + '0' - 1)){
				printf("\aERROR04:原数据超出原进制\n");
				flag++;
				return flag;
			}
		}//if2

		if(isalpha(t)){			//s[i]是否为字母
			t = toupper(t);		//字母统一转化成大写形式
			if(t >= (m - 10 + 'A')){
				printf("\aERROR04:原数据超出原进制\n");
				flag++;
				return flag;
			}
		}//if3
	}//for

//ERROR05：原进制与目标进制相同
	if(m == n){
		printf("\aERROR05：原进制与目标进制相同！\n");;
		flag++;
		return flag;
	}
	return flag;
}


//将输入数据转换成数字
//参数：s:原数据的字符串的指针
void Convert(char *s){
	int i = 0;
	while(s[i]){
		if(s[i] >= 'a' && s[i] <= 'z')
			s[i] = s[i]-'a'+10;		//字符转换为对应的数字
		else if(s[i] >= 'A' && s[i] <= 'Z')
			s[i] = s[i]-'A'+10;
		else
			s[i] -='0';	//将数字转化为对应的ASCII码值
		i++;
	}//while
}