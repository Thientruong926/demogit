#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n, s;
    cin >> n >> s;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    vector<bool> dp(s + 1, false);
    dp[0] = true;
    for (int i = 0; i < n; i++)
    {
        for (int j = s; j >= a[i]; j--)
        {
            if (dp[j - a[i]] == true)
            {
                dp[j] = true;
            }
        }
    }
    if (dp[s])
        cout << 1 << endl;
    else
        cout << 0 << endl;
    return 0;
}