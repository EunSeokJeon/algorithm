#include <iostream>

#define Max_Size 1000000

using namespace std;
int exRoom[Max_Size];




int main(){
	int N;
	int a,b,c;
	int r1, r2, result;
	
	cin>> N;
	
	for(int i =0 ; i< N;i++){
		cin >> a;
		exRoom[i] = a;
	}
	
	cin >> b;
	cin >> c;
	//총 감독관보다 큰 경우 -> result += (시험실 응시자수-감독관 커버수)/부감독관 커버수 + 1 
	//총 감독관과 같은 경우 // result ++;
	//총 감독관보다 적은 경우 // result ++ ; 
	for(int i = 0 ; i< N; i++){
		if((exRoom[i] / b) >= 1){
			
			if( (exRoom[i]-b)%c == 0 )
				result += (exRoom[i]-b)/c + 1;
			else
				result += (exRoom[i]-b)/c + 2;
		}
		else{
			result++;
		}
			
	}
	
	cout << result;
	return 0;
}
