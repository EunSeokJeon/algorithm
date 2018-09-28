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
	
	//后沫, 寒 技泼 
	for(int i = 0 ; i< N; i++){
		for(int j = 0 ; j<M; j++){
			cin >> map[i][j];
		}
	}	
	cx = c;
	cy = r;
	cd = d;
	
	
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
 
        map[cy][cx] = 2; // 没家窃!
 
        result++;
        turnCount = 0;					
	} 
	cout << result;
	return 0;
}
	

	


