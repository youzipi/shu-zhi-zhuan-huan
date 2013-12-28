#include<stdio.h>
//将m进制数转换成10进制并返回
//参数：l：原数据的长度
//		result:转换成10进制后的值
int M2D_ar(int l){
	int a[32],// = {l},
		i = 0,
		result;
	a[0] = 1;
	while(i < l){
		a[i+1] = a[i] * m;
		i++;
	}//while
	i = result = 0;
	for(l--;l >= 0;l--,i++)
		result += s[l]*a[i];
	return result;
}//M2D

//数组实现10进制数x转换成n进制数
//参数：x:原数据对应的十进制数
void M2X_ar(int x){
	int i = 0,
		t;
	char result[32];
	while(x){
		t = x%n;
		if(t > 9)
			result[i++] = t - 10+ 'A';
		else
			result[i++] = t + '0';
		x /= n;
	}//while
	for(i--;i >= 0;i--)
		printf("%c",result[i]);
	//printf("\n");
}//M2X

