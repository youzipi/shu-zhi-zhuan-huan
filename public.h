#define MAX 0x7fffffff

int m;	//原进制
int n;	//目标进制
int len;
//char s[33];
int s;

void Convert(char *s){
	int i = 0;
	while(s[i]){
		if(s[i] >= 'a' && s[i] <= 'z')
			s[i] = s[i]-'a'+10;		//字符转换为对应的数字
		else if(s[i] >= 'A' && s[i] <= 'Z')
			s[i] = s[i]-'A'+10;
		//else
		//	s[i] -='0';
		i++;
	}
}


