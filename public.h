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

		printf("\n�밴Ҫ�����룺\n");
		printf("ԭ����	ԭ����	Ŀ�����(<=36)\n");
		//scanf("%d%d%d",&s,&m,&n);
		//get();
		scanf("%s%d%d",s,&m,&n);
		if(m > 36 || n >36){
			printf("ERROR:���Ƴ�����Χ��1~36����");
			flag++;
		}
		if(m == n){
			printf("ERROR��ԭ������Ŀ�������ͬ��");
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
			printf("ERROR:ԭ���ݲ��Ϸ�");
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