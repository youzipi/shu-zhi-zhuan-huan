#include<stdio.h>
//�ݹ�ʵ��10������xת��Ϊn������
//������x:ԭ���ݶ�Ӧ��ʮ������x
void M2X_rec(int x){
	int r;
	r = x % n;
	if(x >= n)
		M2X_rec(x / n);
	if(r < 10)
		putchar(r + '0');
	else
		putchar(r - 10 +'A');
}