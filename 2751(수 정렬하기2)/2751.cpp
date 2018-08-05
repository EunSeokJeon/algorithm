#include <stdio.h>
//퀵 정렬로 하면 틀린다. 
//stl의 sort함수는 퀵정렬을 기반으로 하되, 최악의 경우에도 NlogN이 나오므로 sort 함수를 사용하는게 좋다. 
int number, data[1000001];

void quickSort(int *data, int start, int end){
	if(start>=end){
		return;
	}
	int key = start;
	int i = start + 1, j=end,temp;
	
	while(i<=j){
		while(data[i]<=data[key]){
			i++;
		}
		while(data[j]>= data[key] && j> start){
			j--;
		}
		if(i>j){
			temp = data[j];
			data[j] = data[key];
			data[key] = temp;
		}
		else{
			temp = data[i];
			data[i] = data[j];
			data[j]=temp;
		}
	}
	quickSort(data,start, j-1);
	quickSort(data, j+1, end);
} 



int main(void){
	scanf("%d", &number);
	for(int i = 0; i<number; i++){
		scanf("%d", &data[i]);		
	}
	
	quickSort(data, 0 , number -1);
	
	for(int i = 0; i< number; i++){
		printf("%d\n", data[i]);
	}
}
