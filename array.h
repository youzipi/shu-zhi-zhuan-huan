//int Turn_10(int x,int m){
//	while()

int M2D(int l){
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
}

