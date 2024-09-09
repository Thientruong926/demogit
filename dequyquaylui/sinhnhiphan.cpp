#include <iostream>
#include <vector>
using namespace std;
int n;
int a[1000][1000];
int d[1000];
int d2[1000];
int dx[2] = {1, 1};
int dy[2] = {0, 1};
long long ans = 0;
long long tong = 0;
void loang(int i, int j, int dem)
{
    if (i >= n || j > i)
    {
        if (tong > ans)
        {
            for (int i = 0; i < n; i++)
            {
                d2[i] = d[i];
            }
            ans = tong;
        }
        return;
    }
    tong += a[i][j];
    d[dem] = a[i][j];
    cout << i << ' ' << j << ' ' << tong << endl;
    for (int k = 0; k <= 1; k++)
    {
        loang(i + dx[k], j + dy[k], dem + 1);
        tong -= a[i + dx[k]][j + dy[k]];
    }
}
int main()
{
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cin >> a[i][j];
        }
    }
    loang(0, 0, 0);
    for (int i = 0; i < n; i++)
    {
        cout << d2[i] << ' ';
    }
    cout << endl
         << ans;
    return 0;
}