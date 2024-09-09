#include <iostream>
#include <cstring>
using namespace std;
void solve()
{
    string s;
    int k;
    cin >> s >> k;
    int ans = 0;
    int a[256];
    for (int i = 0; i < s.length(); i++)
    {
        memset(a, 0, sizeof(a));
        int dem = 0;
        for (int j = i; j < s.length(); j++)
        {
            if (a[s[j]] == 0)
            {
                dem++;
                a[s[j]] = 1;
            }
            if (dem == k)
            {
                ans++;
            }
            if (dem > k)
            {
                break;
            }
        }
    }
    cout << ans << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}