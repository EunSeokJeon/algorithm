#include <iostream>
#include <vector>

using namespace std;

int number = 6; 
int c[6];
vector<int> a[8];

void dfs(int x){
	if(c[x]) return;
	c[x]= true;
	cout << x << ' ';
	for(int i = 0; i< a[x].size(); i++){ //작은  
		int y = a[x][i];		
		dfs(y);
	}
}


int main(void){
// 1과 2을 연결합니다. 
	a[1].push_back(2);
	a[1].push_back(5);
	
	a[2].push_back(1);
	a[2].push_back(3);
	a[2].push_back(4);
	a[2].push_back(5);
	
	a[3].push_back(2);
	a[3].push_back(4);
	
	a[4].push_back(3);
	
	a[4].push_back(6);
	a[4].push_back(2);
	a[4].push_back(5);
	
	a[5].push_back(1);
	a[5].push_back(2);
	a[5].push_back(4);
	
	a[6].push_back(4);
	
	
/*
	// 4와 5를 연결합니다.
	a[4].push_back(5);
	a[5].push_back(4);
	// 6과 7을 연결합니다.
	a[6].push_back(7);
	a[7].push_back(6);
*/
	// BFS를 수행합니다.
	dfs(1);

	return 0;
}
