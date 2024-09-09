#include <iostream>
#include <cstring>
using namespace std;
void solve()
{
    string s;
    cin >> s;
    int len = s.length();
    int dp[len + 1][3];
    int pre[len + 1];
    memset(dp, 0, sizeof(dp));
    memset(pre, 0, sizeof(pre));
    dp[0][0] = 1;
    int num = 0;
    for (int i = 1; i <= len; i++)
    {
        num += s[i - 1] - '0';
        num %= 3;
        pre[i] = num;
        dp[i][num] += 1;
        dp[i][0] += dp[i - 1][0];
        dp[i][1] += dp[i - 1][1];
        dp[i][2] += dp[i - 1][2];
    }
    int ans = 0;
    for (int i = 1; i <= len; i++)
    {
        int tmp1 = s[i - 1] - '0';
        if (tmp1 == 8)
        {
            ans++;
        }
        if (i >= 2)
        {
            int tmp2 = (s[i - 2] - '0') * 10 + s[i - 1] - '0';
            if (tmp2 % 8 == 0 && tmp2 % 3 != 0)
            {
                ans++;
            }
        }
        if (i >= 3)
        {
            int tmp3 = (s[i - 3] - '0') * 100 + (s[i - 2] - '0') * 10 + s[i - 1] - '0';
            if (tmp3 % 8 == 0)
            {
                ans += i - 2;
                ans -= dp[i - 3][pre[i]];
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