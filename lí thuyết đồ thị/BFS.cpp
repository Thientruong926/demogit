#include <iostream>
#include <vector>
#include <queue>
#include <cstring>
using namespace std;
int n, m;
vector<int> v[1001];
bool visited[1001];
void inp()
{
    memset(visited, 0, sizeof(visited));
    cin >> n >> m;
    int x, y;
    for (int i = 0; i < m; i++)
    {
        cin >> x >> y;
        v[x].push_back(y);
        v[y].push_back(x);
    }
}
void bfs(int t)
{
    queue<int> q;
    q.push(t);
    visited[t] = true;
    while (!q.empty())
    {
        int tmp = q.front();
        q.pop();
        cout << tmp << ' ';
        for (int x : v[tmp])
        {
            if (!visited[x])
            {
                q.push(x);
                visited[x] = true;
            }
        }
    }
}
int main()
{
    inp();
    bfs(1);
    return 0;
}