#include <iostream>
#include <vector>
#include <queue>

// 1. 큐에서 하나의 노드를 꺼냅니다.
// 2. 해당 노드에 연결된 노드ㅡ 중 방문하지 않은 노드를 방문하고, 차례대로 큐에 삽입합니다.

using namespace std;

int number = 15;
int c[15];
vector<int> a[16];

void bfs(int start){
	queue<int> q;
	q.push(start); // 1. 시작 노드를 큐에 삽입 
	c[start] = true; // 2. 시작노드를 방문했다고 처리 해줌 
	while(!q.empty()){
		int x = q.front(); 
		q.pop(); // 3. 큐에서 하나의 노드를 꺼내고 
		printf("%d ", x);
		for(int i = 0; i<a[x].size(); i++){ // 4. 해당 노드에 연결된 노드들 순회 
			int y = a[x][i]; // 연결된 노드 
			if(!c[y]){ // 5. 방문하지 않은 노드이면 
				q.push(y); // 6.큐에 삽입한다. 
				c[y] = true; // 7. 방문 처리한다.       3~7을 큐가 빌 때까지 반복한다. 
			}
		}		
	}
	
}

int main(void){
	
	/*
	// 1과 2을 연결합니다. 
	a[1].push_back(2);
	a[2].push_back(1);
	// 1과 3를 연결합니다.
	a[1].push_back(3);
	a[3].push_back(1);
	// 2과 3를 연결합니다.
	
	//
	a[2].push_back(3);
	a[3].push_back(2);
	//
	// 2과 4을 연결합니다. 
	a[2].push_back(4);
	a[4].push_back(2);
	// 2과 5를 연결합니다.
	a[2].push_back(5);
	a[5].push_back(2);
	// 3와 6를 연결합니다.
	a[3].push_back(6);
	a[6].push_back(3);
	// 3와 7을 연결합니다.
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
	// BFS를 수행합니다.
	
	bfs(1);

	return 0;
}
 
