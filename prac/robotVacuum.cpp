#include <iostream>

#define Max_Size 51

using namespace std;

int map[Max_Size][Max_Size];
int check[Max_Size][Max_Size];

int main(){
	
	int N, M, r, c, d;
	int dx[] = {0, 1, 0, -1};
	int dy[] = {1, 0, -1, 0};
	int x, y;
	cin >> N >> M >>r >> c >> d;
	
	//ºóÄ­, º® ¼¼ÆÃ 
	for(int i = 0 ; i< N; i++){
		for(int j = 0 ; j<M; j++){
			cin >> map[i][j];
		}
	}
	/*
	if(d == 0){ //ºÏ 
		x = dx[0];
		y = dy[0];
		break;
	}
	else if(d==1){ //µ¿ 
		x = dx[1];
		y = dy[1];
		break;
	}
	else if(d==2){ //³² 
		x = dx[2];
		y = dy[2];
		break;
	}
	else if(d==3){ //¼­ 
		x = dx[3];
		y = dy[3];
		break;
	}
	*/
	
	while(){
		check[r][c]=1;//ÇöÀç À§Ä¡ Ã»¼Ò 
		
		for(int i = 0 ; i< 4; i++){
			if(d>0){
				d--;
			}
			else{
				d=3;
			}
			
			nx=c+dx[d];
			ny=r+dy[d];
			
			if(map[r][c] == 0 && check[r][c] == 0){
				check[r][c] = 1;
				continue;
			}
			if(map[r][c] == 1){
				r-=x;
				c-=y;
				continue;
			}
			else if(map[
				
		} 
	}
	
	
	
	return 0;
}
