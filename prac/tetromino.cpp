#include <iostream>
#define Max_Size 501


using namespace std;

int paper[Max_Size][Max_Size];



int main(){
	
	int N, M;
	
	cin >> N >> M;
	
	int poly1[4][4]; // bar
	int poly2[2][2]; // square
	int poly3[3][3];
	int poly4[3][3]; 
	int poly5[3][3];
	
	//종이위에 값 세팅 
	for(int i = 0 ; i < N; i++){
		for(int j = 0; j< M; j++){
			cin >> paper[i][j];
		}
	}
	
	
	
	
	
	return 0;
}
