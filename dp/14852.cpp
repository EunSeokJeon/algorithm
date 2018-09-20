/*
#include <stdio.h>

int d[1000001];

int dp(int x){
	if(x == 0) return 1;
	if(x == 1) return 2;
	if(x == 2) return 7;
	
	if(d[x] != 0) return d[x];
	int result = 3*dp(x-2) + 2*dp(x-1);
	
	for(int i = 3 ; i <=x; i++){
		result += 2 * dp(x-i);
	}
	
	return d[x] = result % 100000007;
}

int main(void){
	int x ; 
	scanf("%d", &x);
	printf("%d", dp(x));
	
	return 0;
}

*/


#include <stdio.h>

long long int d[1000001][2];

int dp(int x){
	d[0][0]=0;
	d[1][0]=2;
	d[2][0]=7;
	d[2][1]=1;
	
	for(int i = 3 ; i<=x ; i++){
		d[i][1] = (d[i-1][1] + d[i-3][0]) % 100000007;
		d[i][0] = (3 * d[i-2][0] + 2 * d[i-1][0] + 2 * d[i][1]) % 100000007;
		
	}
	
	return d[x][0];
	
	
}

int main(void){
	int x ; 
	scanf("%d", &x);
	printf("%lld", dp(x));
	
	return 0;
}

