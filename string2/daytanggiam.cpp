#include <iostream>
#include <algorithm>
using namespace std;
void solve()
{
    string k;
    cin >> k;
    string res = "";
    for (int i = 1; i <= k.length() + 1; i++)
    {
        res += char(i + '0');
    }
    bool ok = true;
    while (ok)
    {
        int tmp = 0;
        for (int i = 0; i < k.length(); i++)
        {
            if (k[i] == 'D')
            {
                if (res[i] < res[i + 1])
                {
                    swap(res[i], res[i + 1]);
                }
                else
                {
                    tmp++;
                }
            }
            else
            {
                tmp++;
            }
        }
        if (tmp == k.length())
        {
            ok = false;
        }
    }
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