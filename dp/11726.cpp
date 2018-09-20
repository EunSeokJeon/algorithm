#include <stdio.h>

int d[1001];

int dp(int x){
	if(x==1) return 1; //재귀함수 종료 조건 
	if(x==2) return 2; //재귀함수 종료 조건
	if(d[x]!= 0) return d[x];
	return d[x] = (dp(x-1) + dp(x-2)) % 10007;
}


int main(void){
	
	int x ;
	scanf("%d", &x);
	printf("%d", dp(x));
	
	return 0;
}
