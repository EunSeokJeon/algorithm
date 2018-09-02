#include <iostream>
#include <vector>

using namespace std;

int number;
int heap[1000001];



void heapify(int i){//현재와 자식을 교환하고, 자식도 총 갯수의 반까지만 재귀적으로 heapify를 수행한다. 
	//왼쪽 자식 노드를 가리킵니다. 
	int c = 2* i + 1;
	
	//오른쪽 자식 노드가 있고, 왼쪽 자식노드보다 크다면 
	if(c<number && heap[c] < heap[c+1]) {
		c++;
	}
	
	//부모보다 자식이 더 크다면 위치를 교환합니다. 
	if(heap[i]< heap[c]){
		int temp = heap[i];
		heap[i] = heap[c];
		heap[c] = temp;		
	}
	
	//number / 2까지만 수행하면 된다. why? ********
	if(c <= number / 2) heapify(c); 
}

int main(void){
	cin >> number;
	
	for(int i = 0 ; i< number ;  i++){
		int x;
		cin >> heap[i];
	}
	*
	//힙을 생성합니다. 여긴 또 왜 number / 2 why?  ********** number 
	for(int i = number / 2; i>= 0 ; i--){
		heapify(i);
	} 
	
	
	//다른 책도 한번 찾아보자~ **************
	
	//정렬을 수행합니다.
	for(int i = number - 1; i >=0;i--){
		for(int j = 0 ; j<number ; j++){
			cout << heap[j] << ' ';
		}
		cout << '\n';
		int temp = heap[0];
		heap[0] = heap[i];
		heap[i] = temp;
		int root = 0;
		int c = 1;
		do{
			c = 2*root + 1;
			if(c<i-1 && heap[c]<heap[c+1])
				c++;
			if(c<i&&heap[root]<heap[c]){
				temp = heap[root];
				heap[root] = heap[c];
				heap[c] = temp;
			}
			root = c;
		}while(c<i);
	} 
}
