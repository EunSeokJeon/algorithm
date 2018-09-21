#include <iostream>
#include <vector>
#include <queue>
#define MAX 10

using namespace std;

int n, inDegree[MAX]; //진입차수 
vector<int> a[MAX];  //각 정점 연결 노드 정보 

void topologySort(){
	int result[MAX];
	queue<int> q;
	
	//진입 차수가 0인 노드를 큐에 삽입합니다.
	for(int i = 1; i<=n ; i++){
		if(inDegree[i]==0) q.push(i);
	} 
	
	//위상 정렬이 완전히 수행되려면 정확히 N개의 노드를 방문해야 한다.
	for(int i = 1 ; i<=n ; i++){
		//n개를 방문하기 전에 큐가 빈다면 사이클이 발생한 것 
		if(q.empty()){
			printf("사이클이 발생했습니다.");
			return; 
		}
		int x = q.front();
		q.pop();
		result[i] = x;
		for(int i = 0 ; i<a[x].size();i++){ //x와 연결된 갯수만큼 돌면서 
			int y = a[x][i]; //연결된 값을 찾아서 
			//새롭게 진입차수가 0이 된 점을 큐에 삽입합니다. 
			if(--inDegree[y]==0){ //그 연결된 값의 진입차수를 줄여서 0이면 
				q.push(y); //큐에 넣는다. 
			}
		}
	}
		for(int i = 1; i<=n ; i++){
			printf("%d ", result[i]);
		}
	
}

int main(void){
	n = 7;
	a[1].push_back(2);
	inDegree[2]++;
	a[1].push_back(5);
	inDegree[5]++;
	a[2].push_back(3); 
	inDegree[3]++;
	a[3].push_back(4); 
	inDegree[4]++;
	a[4].push_back(6); 
	inDegree[6]++;
	a[5].push_back(6); 
	inDegree[6]++;
	a[6].push_back(7); 
	inDegree[7]++;
	topologySort();

	return 0;	
}
