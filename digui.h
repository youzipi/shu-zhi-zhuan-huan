#include<stdio.h>

void M2X_dg(int x){
	int r;
	//while(x){
	//if(x){
	//	//x = x / n;
	//	M2X_dg(x / n);
	//	t = x % n;

	//	if(t > 9)
	//		printf("%c",t - 10 + 'A');
	//	else
	//		printf("%c",t + '0');
	//	
	//}//while
	r = x % n;
	if(x >= n)
		M2X_dg(x / n);
	if(r < 10)
		putchar(r + '0');
	else
		putchar(r - 10 +'A');
}