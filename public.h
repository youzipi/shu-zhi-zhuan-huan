#define MAX 0x7fffffff
#include<ctype.h>

int m;	//ԭ����
int n;	//Ŀ�����
int len;
//char s[33];
int s[33];
//int s;



void Convert(int *s){
	int i = 0;
	while(isalnum(s[i])){
		//if(s[i] >= 'a' && s[i] <= 'z')
		s[i] = toupper(s[i]);
		//if(islower(s[i]))
			//s[i] = s[i]-'a'+10;		//�ַ�ת��Ϊ��Ӧ������
		//else if(s[i] >= 'A' && s[i] <= 'Z')
		//else if(isupper(s[i]))
		if(isalpha(s[i]))
			s[i] = s[i]-'A'+10;
		else
			s[i] -='0';	//������ת��ΪASCII��ֵ,
		i++;
	}
}


