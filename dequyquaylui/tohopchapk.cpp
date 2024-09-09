#include <iostream>
#include <vector>
#include <cstring>
#include <algorithm>
using namespace std;
// DEQUYDAYSO2
int n, a[16];
bool f[16];
long long tong = 0;
vector<vector<int>> v;
vector<int> v2;
void Try(int i, int k)
{
    for (int j = i + 1; j <= n - k + i + 1; j++)
    {
        if (f[j] == false)
        {
            f[j] = true;
            v2.push_back(a[j]);
            tong += a[j];
            if (j == k)
            {
                v.push_back(v2);
            }
            else
            {
                Try(j, k);
            }
            f[j] = false;
            v2.pop_back();
            tong -= a[j];
        }
    }
}
int main()
{
    cin >> n;
    // a[0]=0;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    memset(f, false, sizeof(f));
    for (int i = 1; i <= n; i++)
    {
        Try(0, i);
    }
    for (int i = 0; i < v.size(); i++)
    {
        for (int j = 0; j < v[i].size(); j++)
        {
            cout << v[i][j] << ' ';
        }
        cout << endl;
    }
    return 0;
}