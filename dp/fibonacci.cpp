/*
#include <stdio.h>

int dp(int x){
	if(x==1) return 1; //��� ���� ���� 
	if(x==2) return 1; //��� ���� ���� 
	return dp(x-1) + dp(x-2);
}


int main(void){
	
	printf("%d", dp(10));
}


*/

#include <stdio.h>

int d[100];//�������� �迭�� 0���� �ʱ�ȭ 


int dp(int x){
	if(x==1) return 1; //��� ���� ���� 
	if(x==2) return 1; //��� ���� ���� 
	if(d[x]!=0) return d[x];
	return d[x]=dp(x-1) + dp(x-2);
}


int main(void){
	
	printf("%d", dp(30));
}
