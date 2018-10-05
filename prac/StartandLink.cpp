#include <iostream>
#include <vector>
#include <algorithm>

#define MAX_SIZE 21
#define INF 1000000000

using namespace std;

int map[MAX_SIZE][MAX_SIZE];

int n;
int result;
bool is_used[MAX_SIZE];

void dfs(int currentPlayer, int cnt) {
	if (cnt == n / 2) { 	//dfs ���� ����
		//dfs ���� ���� �� �� ��		

		vector<int> team_link, team_start;

		//�� ������		
		for (int i = 0; i < n; i++) {
			if (is_used[i]) {
				team_start.push_back(i);
			}
			else team_link.push_back(i);
		}

		//�ɷ�ġ ���� ���ؼ� �ּҰ� ���ϱ�
		int s_start = 0, s_link = 0;

		for (int i = 0; i < team_start.size(); i++) {
			for (int j = i; j < team_link.size(); j++) {
				s_start += map[team_start[i]][team_start[j]] + map[team_start[j]][team_start[i]];
				s_link += map[team_link[i]][team_link[j]] + map[team_link[j]][team_link[i]];
			}
		}
		result = min(result, abs(s_start - s_link));
		return;
	}

	//����Ž�� ���� dfsȣ�� 
	for (int i = currentPlayer + 1; i < n; i++) {
		if (is_used[i] == false) {
			is_used[i] = true;
			dfs(i, cnt + 1);
			is_used[i] = false;
		}
	}
}

int main() {

	cin >> n;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> map[i][j];
		}
	}

	result = INF;

	dfs(0, 0);


	cout << result;
	system("pause");
	return 0;
}
