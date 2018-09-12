#include <iostream>
#include <queue>

using namespace std;


int main(){
	queue<int> q;
	
	
	q.push(7);
	q.push(6);
	q.push(5);
	q.push(2);
	q.pop();
	q.push(3);
	q.push(1);
	
	while(!q.empty()){
		
		cout << q.front() << ' ';
		q.pop();
	}
	
	
	
	return 0;
}
