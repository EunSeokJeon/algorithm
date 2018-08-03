#include <stdio.h>
/*
int main(void){
	int i,j,temp;
	int array[10]={1, 10, 5, 8, 7, 6, 4, 3, 2, 9};
	//원하는 위치에 넣으려고 하더라도 인접한 것들끼리 먼저 비교해야 하기 때문에 선택한 원소에 가깝고 작은 것부터 인접 비교한다.
 	//맨 앞은 정렬이 되므로 뒤에서부터 접근할 때 정렬된 것이라면 연산을 할 필요가 없다. 
	for(i = 0 ; i<9;i++){
		j=i;
		while(array[j]>array[j+1]){
			temp = array[j];
			array[j] = array[j+1];
			array[j+1] = temp;
			j--;
		}
	}
	
	for(i=0;i<10;i++){
		printf("%d ", array[i]);
	}
	
	return 0;
}
*/

int main(void){
	int i, j, temp;	
	int array[10]={1, 10, 5, 8, 7, 6, 4, 3, 2, 9};
	
	for(i = 1; i<10;i++){
		j=i;
		while(array[j-1]>array[j]){
			temp = array[j-1];
			array[j-1]=array[j];
			array[j] = temp;
			j--;
		}
	
	}
	
	for(i = 0 ; i<10; i++)
	printf("%d ", array[i]);
	
		
	
	return 0;	
} 
