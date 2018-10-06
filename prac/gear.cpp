#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int a[4][8];
int n;
string s;
vector< pair<int,int> > change;

void turn(int dir, int* arr){
	int temp = 0;
    switch (dir) {
    case 1:
        temp = arr[7];
        for (int i = 7; i > 0; i--)
            arr[i] = arr[i - 1];
        arr[0] = temp;
        break;
    case -1:
        temp = arr[0];
        for (int i = 0; i < 7; i++)
            arr[i] = arr[i + 1];
        arr[7] = temp;
        break;
    }	
}

int opp(int dir){
	return dir == 1 ? -1 : 1;
} 

void go(){
    for (int t = 0; t < change.size(); t++) {
        int num = change[t].first;
        int dir = change[t].second;
 
        int c[4] = { 0,0,0,0 }; //돌려야하는 방향을 저장하는 배열 
        c[num] = dir;
 
        int next = num - 1;
        while (true) { //왼쪽 확인코드
            if (next<0) break;
            if (a[next][2] == a[next + 1][6]) break;
            c[next] = opp(c[next + 1]);
            --next;
        }
        next = num + 1;
        
		while (true) { //오른쪽 확인코드 
            if (next>3) break;
            if (a[next][6] == a[next - 1][2]) break;
            c[next] = opp(c[next - 1]);
            ++next;
        }
		 
        for (int i = 0; i < 4; i++)
            turn(c[i], a[i]);
    }
    int ans = 0;
    if (a[0][0] == 1) ++ans;
    if (a[1][0] == 1) ans += 2;
    if (a[2][0] == 1) ans += 4;
    if (a[3][0] == 1) ans += 8;
    cout << ans << endl;
}
int main(){	
	for (int i = 0; i < 4; i++) {
    cin >> s;
    for (int j = 0; j < 8; j++)
        a[i][j] = s[j] - 48; //'1' - 48 = 1
	}
	cin >> n;
	int num = 0, dir = 0;
	for (int i = 0; i < n; i++) {
	    cin >> num >> dir;
	    change.push_back( make_pair(num-1, dir) ) ;
	}
	go();	
	return 0;
}
