/*
#include <stdio.h>

int dp(int x){
	if(x==1) return 1; //재귀 종료 조건 
	if(x==2) return 1; //재귀 종료 조건 
	return dp(x-1) + dp(x-2);
}


int main(void){
	
	printf("%d", dp(10));
}


*/

#include <stdio.h>

int d[100];//전역변수 배열은 0으로 초기화 


int dp(int x){
	if(x==1) return 1; //재귀 종료 조건 
	if(x==2) return 1; //재귀 종료 조건 
	if(d[x]!=0) return d[x];
	return d[x]=dp(x-1) + dp(x-2);
}


int main(void){
	
	printf("%d", dp(30));
}
