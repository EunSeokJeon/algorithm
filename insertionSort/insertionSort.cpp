#include <stdio.h>
/*
int main(void){
	int i,j,temp;
	int array[10]={1, 10, 5, 8, 7, 6, 4, 3, 2, 9};
	//���ϴ� ��ġ�� �������� �ϴ��� ������ �͵鳢�� ���� ���ؾ� �ϱ� ������ ������ ���ҿ� ������ ���� �ͺ��� ���� ���Ѵ�.
 	//�� ���� ������ �ǹǷ� �ڿ������� ������ �� ���ĵ� ���̶�� ������ �� �ʿ䰡 ����. 
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
