#define MAX 0x7fffffff
#include<ctype.h>
#include<stdio.h>
#include<string.h>

int m;	//ԭ����
int n;	//Ŀ�����
int len;
char s[33];
//int s;
int Input(){
	int flag = 0;
	//fflush(stdin);

	printf("\n�밴Ҫ�����룺\n");
	printf("ԭ����	ԭ����	Ŀ����ƣ�<=36��\n");
	flushall();		//��ջ�����
	//scanf("%d%d%d",&s,&m,&n);
	//get();
	//f = ;
	if(3 != scanf("%s%d%d",s,&m,&n)){	//
		printf("\aERROR01:�������\n");
		flag++;
		return flag;
	}

	if(m > 36 || n >36){
		printf("\aERROR02:���Ƴ�����Χ��1~36����\n");
		flag++;
		return flag;
	}
	len = strlen(s);
	int i;
	for(i = 0;i < len ;i++){
		int t = s[i];
		if(!isalnum(t)){
			printf("\aERROR03:ԭ���ݲ��Ϸ�\n");
			printf("�Ϸ����ݣ���a~z,A~Z,0~9��\n");
			flag++;
			return flag;
		}

		if(isdigit(t)){
			if( t >= (m + '0' - 1)){
				printf("\aERROR04:ԭ���ݳ���ԭ����\n");
				flag++;
				return flag;
			}
		}
		if(isalpha(t)){
			t = toupper(t);
			if(t >= (m - 10 + 'A')){
				printf("\aERROR04:ԭ���ݳ���ԭ����\n");
				flag++;
				return flag;
			}
		}
	}//if
	//if(i != len){
	//	printf("\aERROR:ԭ���ݲ��Ϸ�\n");
	//	//printf("�Ϸ����ݣ���a~z,A~Z,0~9��\n");
	//	flag++;
	//}
	if(m == n){
		printf("\aERROR05��ԭ������Ŀ�������ͬ��\n");
		//continue;
		flag++;
	}
	return flag;
}



void Convert(char *s){
	int i = 0;
	while(s[i]){
		if(s[i] >= 'a' && s[i] <= 'z')
			s[i] = s[i]-'a'+10;		//�ַ�ת��Ϊ��Ӧ������
		else if(s[i] >= 'A' && s[i] <= 'Z')
			s[i] = s[i]-'A'+10;
		else
			s[i] -='0';	//������ת��ΪASCII��ֵ
		i++;
	}
}