#include <iostream>

using namespace std;

int n;
int a[10001]; //배열 전역변수는 원소값 0으로 초기화 이루어진다. 

int main(void){
	scanf("%d", &n);
	for(int i = 0 ; i< n;i++){
		int x;
		scanf("%d", &x);
		a[x]++;
	}
	for(int i = 0 ; i< 10001; i++){
		while(a[i]!=0){
			printf("%d\n", i);
			a[i]--;
		}
	}
}
