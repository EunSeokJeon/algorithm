#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool compare(pair<string, pair<int, int> > a, pair<string, pair<int, int> > b) {
	if(a.second.first == b.second.first){
		return a.second.second > b.second.second;
	} else{
		return a.second.first > b.second.first;
	}
}


int main(void) {
	vector< pair<string, pair<int, int> > > v;
	v.push_back(pair<string, pair<int, int> >("������", pair<int, int>(90,19901210)));
	v.push_back(pair<string, pair<int, int> >("������", pair<int, int>(92,19900313)));
	v.push_back(pair<string, pair<int, int> >("�ڱٿ�", pair<int, int>(92,19900412)));
	v.push_back(pair<string, pair<int, int> >("�����", pair<int, int>(80,19900118)));
	v.push_back(pair<string, pair<int, int> >("������", pair<int, int>(81,19900813)));
	
	sort(v.begin(), v.end(), compare);
	
	for(int i = 0 ; i<v.size() ; i++) {
		cout << v[i].first << ' '; //first�� int second�� string 
	}
}
