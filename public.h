#define MAX 0x7fffffff

int m;	//ԭ����
int n;	//Ŀ�����
int len;
//char s[33];
int s;

void Convert(char *s){
	int i = 0;
	while(s[i]){
		if(s[i] >= 'a' && s[i] <= 'z')
			s[i] = s[i]-'a'+10;		//�ַ�ת��Ϊ��Ӧ������
		else if(s[i] >= 'A' && s[i] <= 'Z')
			s[i] = s[i]-'A'+10;
		//else
		//	s[i] -='0';
		i++;
	}
}


