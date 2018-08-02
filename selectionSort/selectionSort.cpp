#include <stdio.h>

int main(void){
	int i, j, min, index, temp; //i, j는 반복문, min은 최소값, index는 위치, temp는 스왑
	
	int array[10] = {1,10,5,8,7,6,4,3,2,9};
	
	for(i = 0 ; i<10;i++) {
		min = 9999;
		for(j=i;j<10;j++){
			if(min>array[j]){
				min = array[j];
				index = j;
			}
		}
		temp = array[i];
		array[i]=array[index];
		array[index] = temp;
	}
	
	for(i = 0;i<10; i++){
		printf("%d ", array[i]);
	}
	
	return 0;
	
}
