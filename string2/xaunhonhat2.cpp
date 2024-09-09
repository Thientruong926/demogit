#include <iostream>
#include <map>
using namespace std;
void solve()
{
    string s;
    cin >> s;
    map<char, int> m;
    for (char x : s)
    {
        m[x]++;
    }
    int len = m.size();
    int ans = INT_MAX, cnt = 0, left = 0, a[256] = {0};
    for (int i = 0; i < s.length(); i++)
    {
        a[s[i]]++;
        if (a[s[i]] == 1)
        {
            cnt++;
        }
        if (cnt == len)
        {
            while (a[s[left]] > 1)
            {
                a[s[left]]--;
                left++;
            }
            ans = min(ans, i - left + 1);
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