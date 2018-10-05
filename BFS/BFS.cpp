#include <iostream>
#include <vector>
#include <queue>

// 1. ť���� �ϳ��� ��带 �����ϴ�.
// 2. �ش� ��忡 ����� ���� �� �湮���� ���� ��带 �湮�ϰ�, ���ʴ�� ť�� �����մϴ�.

using namespace std;

int number = 15;
int c[15];
vector<int> a[16];

void bfs(int start){
	queue<int> q;
	q.push(start); // 1. ���� ��带 ť�� ���� 
	c[start] = true; // 2. ���۳�带 �湮�ߴٰ� ó�� ���� 
	while(!q.empty()){
		int x = q.front(); 
		q.pop(); // 3. ť���� �ϳ��� ��带 ������ 
		printf("%d ", x);
		for(int i = 0; i<a[x].size(); i++){ // 4. �ش� ��忡 ����� ���� ��ȸ 
			int y = a[x][i]; // ����� ��� 
			if(!c[y]){ // 5. �湮���� ���� ����̸� 
				q.push(y); // 6.ť�� �����Ѵ�. 
				c[y] = true; // 7. �湮 ó���Ѵ�.       3~7�� ť�� �� ������ �ݺ��Ѵ�. 
			}
		}		
	}
	
}

int main(void){
	
	/*
	// 1�� 2�� �����մϴ�. 
	a[1].push_back(2);
	a[2].push_back(1);
	// 1�� 3�� �����մϴ�.
	a[1].push_back(3);
	a[3].push_back(1);
	// 2�� 3�� �����մϴ�.
	
	//
	a[2].push_back(3);
	a[3].push_back(2);
	//
	// 2�� 4�� �����մϴ�. 
	a[2].push_back(4);
	a[4].push_back(2);
	// 2�� 5�� �����մϴ�.
	a[2].push_back(5);
	a[5].push_back(2);
	// 3�� 6�� �����մϴ�.
	a[3].push_back(6);
	a[6].push_back(3);
	// 3�� 7�� �����մϴ�.
	a[3].push_back(7);
	a[7].push_back(3);
	
	a[4].push_back(8);
	a[8].push_back(4);
	
	a[4].push_back(9);
	a[9].push_back(4);
	
	a[5].push_back(10);
	a[10].push_back(5);
	
	a[5].push_back(11);
	a[11].push_back(5);
	
	a[6].push_back(12);
	a[12].push_back(6);
	
	a[6].push_back(13);
	a[13].push_back(6);
	
	a[7].push_back(14);
	a[14].push_back(7);
	
	a[7].push_back(15);
	a[15].push_back(7);
	*/
	// BFS�� �����մϴ�.
	
	bfs(1);

	return 0;
}
 
