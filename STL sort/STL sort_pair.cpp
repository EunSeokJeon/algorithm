#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void) {
	vector< pair<int, string> > v;
	v.push_back(pair<int, string>(90, "������"));
	v.push_back(pair<int, string>(85, "������"));
	v.push_back(pair<int, string>(98, "�ڱٿ�"));
	v.push_back(pair<int, string>(80, "�����"));
	v.push_back(pair<int, string>(81, "������"));
	
	sort(v.begin(), v.end());
	
	for(int i = 0 ; i<v.size() ; i++) {
		cout << v[i].second << ' '; //first�� int second�� string 
	}
}
