#include <iostream>

#define MAX_SIZE 51

using namespace std;

int map[MAX_SIZE][MAX_SIZE];


int turn(int now)
{
    return (now + 1) % 4; // 0->1 1->2 2->3 3->0
}

int main(){
	
	int N, M, r, c, d;
	int dx[] = {0, 1, 0, -1};
	int dy[] = {1, 0, -1, 0};
	int nx, ny;
	int cx, cy, cd, turnCount=0;
	int result=0;
	cin >> N >> M >>r >> c >> d;
	
	//빈칸, 벽 세팅 
	for(int i = 0 ; i< N; i++){
		for(int j = 0 ; j<M; j++){
			cin >> map[i][j];
		}
<<<<<<< HEAD
	}
	/*
	if(d == 0){ //북 
		x = dx[0];
		y = dy[0];
		break;
	}
	else if(d==1){ //동 
		x = dx[1];
		y = dy[1];
		break;
	}
	else if(d==2){ //남 
		x = dx[2];
		y = dy[2];
		break;
	}
	else if(d==3){ //서 
		x = dx[3];
		y = dy[3];
		break;
	}
	*/
	
	while(){
		check[r][c]=1;//현재 위치 청소 
		
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
	
=======
	}	
	cx = c;
	cy = r;
	cd = d;
>>>>>>> a2915417ede854ee121f4b3a7185f733d3a787b0
	
	
	result ++ ;
	while(1){
		if(turnCount == 4)
        {
            d = turn(cd);
            nx = cx + dx[cd];
            ny = cy + dy[cd];
 
            if(nx < 0 || ny < 0 || nx >= M || ny >= N || map[nx][ny] == 1) break;
 
            cx = nx;
            cy = ny;
            cd = turn(cd);
            turnCount = 0;
            continue;
        }
 
        cd = turn(cd);
        nx = cx + dx[cd];
        ny = cy + dy[cd];
 
        turnCount++;
 
 
        if(nx < 0 || ny < 0 || nx >= M || ny >= N || map[nx][ny] != 0) continue;
 
        cx = nx;
        cy = ny;
 
        map[cy][cx] = 2; // 청소함!
 
        result++;
        turnCount = 0;					
	} 
	cout << result;
	return 0;
}
	

	


