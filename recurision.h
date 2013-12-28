#include<stdio.h>
//递归实现10进制数x转化为n进制数
//参数：x:原数据对应的十进制数x
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