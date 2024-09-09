#include <iostream>
#include <cstring>
using namespace std;
int n, cmin = INT_MAX, dem = 0;
int a[105][105];
int visited[100], x[100];
long long tong = 0, ans = INT_MAX;
void nhap()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cin >> a[i][j];
            if (a[i][j] != 0)
            {
                cmin = min(cmin, a[i][j]);
            }
        }
    }
    memset(visited, 0, sizeof(visited));
}
void Try(int i)
{
    ++dem;
    for (int j = 1; j <= n; j++)
    {
        if (visited[j] == 0)
        {
            visited[j] = 1;
            x[i] = j;
            tong += a[x[i - 1]][x[i]];
            if (i == n)
            {
                ans = min(ans, tong + a[x[n]][1]);
            }
            else if (tong + (n - i + 1) * cmin < ans)
            {
                Try(i + 1);
            }
            visited[j] = 0;
            tong -= a[x[i - 1]][x[i]];
        }
    }
}
int main()
{
    nhap();
    visited[1] = 1;
    x[1] = 1;
    Try(2);
    cout << dem << endl;
    cout << ans;
    return 0;
}