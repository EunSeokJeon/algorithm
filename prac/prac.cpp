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
	//�� ���������� ū ��� -> result += (����� �����ڼ�-������ Ŀ����)/�ΰ����� Ŀ���� + 1 
	//�� �������� ���� ��� // result ++;
	//�� ���������� ���� ��� // result ++ ; 
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
