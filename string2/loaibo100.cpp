#include <iostream>
using namespace std;
void solve()
{
    string s;
    cin >> s;
    int ans = 0;
    for (int i = 0; i < s.length() - 2; i++)
    {
        int tmp = 0;
        while (s.substr(i, 3) == "100")
        {
            s.erase(i, 3);
            tmp += 3;
            while (s[i] == '0')
            {
                i--;
            }
        }
        ans = max(ans, tmp);
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