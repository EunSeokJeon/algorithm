#include <iostream>
#include <algorithm>
#include <vector>

#define MAX_N 51
#define MAX_M 14
#define INF 1000000000

using namespace std;




int N, M, ans;
int city[MAX_N][MAX_N];
bool check[MAX_M];

vector< pair<int, int> > chicken;
vector< pair<int, int> > person;

void Dfs(int cur_num, int cur_cnt)
{
    if (cur_num > chicken.size()) return;

    // 종료 조건과 종료 조건 시 할 일들 
    if (cur_cnt == M)
    {
        int cmp = 0;

        for (int i = 0; i < person.size(); i++)
        {
            int dist = INF;
            for (int j = 0; j < chicken.size(); j++)
            {
                if (check[j])
                {
                    int px = person[i].first, py = person[i].second;
                    int samx = chicken[j].first, samy = chicken[j].second;
                    int d = abs(px - samx) + abs(py - samy);
                    dist = min(dist, d);
                }
            }
            cmp += dist;
        }

        ans = min(ans, cmp);

        return;
    }

    // 현재 치킨집을 사용할 경우
    check[cur_num] = true;
    Dfs(cur_num + 1, cur_cnt + 1);
    // 사용하지 않는 경우
    check[cur_num] = false;
    Dfs(cur_num + 1, cur_cnt);
}

int main()
{    
    cin >> N >> M;

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            cin >> city[i][j];
            if (city[i][j] == 1)
                person.push_back(make_pair(i, j));
            else if (city[i][j] == 2)
                chicken.push_back(make_pair(i, j));
        }
    }

    ans = INF;

    Dfs(0, 0);

    cout << ans << "\n";

    return 0;
}
