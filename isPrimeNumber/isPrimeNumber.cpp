/*#include <stdio.h>

bool isPrimeNumber(int x){
	for(int i = 2 ; i< x ; i++){
		if(x%i == 0) return false;		
	}
	return true;	
}

int main(void){
	
	printf("%d", isPrimeNumber(97));
	return 0;
}
*/

/*
#include <stdio.h>

bool isPrimeNumber(int x){
	for(int i = 2 ; i*i< x ; i++){
		if(x%i == 0) return false;		
	}
	return true;
}

int main(void){
	
	printf("%d", isPrimeNumber(97));
	return 0;
}
*/


#include <stdio.h>

int number = 1000;
int a[1001];

void primeNumberSieve(){
	for(int i = 2; i<=number ; i++){
		a[i] = i;
	}
	
	for(int i = 2; i<=number ; i++){
		if(a[i]==0)	continue;
		for(int j = i*i; j<=number ; j +=i){ //요 부분 다시 보기 
			a[j] = 0;
		}
	}
	
	for(int i = 2 ; i<number ; i++){
		if(a[i]!=0) printf("%d ", a[i]);
	}
}

int main(void){
	primeNumberSieve();
	return 0;
}
