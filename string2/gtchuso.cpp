#include <iostream>
#include <algorithm>
using namespace std;
void solve()
{
    string s;
    int n;
    cin >> n >> s;
    string res = "";
    for (char x : s)
    {
        if (x == '4')
        {
            res += "223";
        }
        else if (x == '6')
        {
            res += "35";
        }
        else if (x == '8')
        {
            res += "2227";
        }
        else if (x == '9')
        {
            res += "3327";
        }
        else if (x != '0' && x != '1')
        {
            res += x;
        }
    }
    sort(res.begin(), res.end(), greater<char>());
    cout << res << endl;
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