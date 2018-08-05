//입력 데이터의 개수를 먼저 파악한다.
//N<=1000 이니까 선택, 버블, 퀵으로 하면 된다. 
 

#include <stdio.h>

int array[1001];

int main(void){
	int number, i, j, min, index, temp;
	scanf("%d", &number);
	for(i=0;i<number; i++){
		scanf("%d", &array[i]);
	}
	
	for(i=0;i<number; i++){
		min=1001;
		for(j=i; j<number; j++){
			if(min>array[j]){
				min=array[j];
				index =j;
			}
		}
		temp = array[i];
		array[i] = array[index];
		array[index] = temp;
	}
	
	for(i = 0; i<number;i++){
		printf("%d\n", array[i]);
	}
	
}
