#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void) {
	vector< pair<int, string> > v;
	v.push_back(pair<int, string>(90, "오상준"));
	v.push_back(pair<int, string>(85, "전은석"));
	v.push_back(pair<int, string>(98, "박근영"));
	v.push_back(pair<int, string>(80, "강재신"));
	v.push_back(pair<int, string>(81, "조만우"));
	
	sort(v.begin(), v.end());
	
	for(int i = 0 ; i<v.size() ; i++) {
		cout << v[i].second << ' '; //first는 int second는 string 
	}
}
