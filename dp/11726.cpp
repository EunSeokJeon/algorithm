#include <stdio.h>

int d[1001];

int dp(int x){
	if(x==1) return 1; //����Լ� ���� ���� 
	if(x==2) return 2; //����Լ� ���� ����
	if(d[x]!= 0) return d[x];
	return d[x] = (dp(x-1) + dp(x-2)) % 10007;
}


int main(void){
	
	int x ;
	scanf("%d", &x);
	printf("%d", dp(x));
	
	return 0;
}
