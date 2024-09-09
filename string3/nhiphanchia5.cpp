#include <iostream>
using namespace std;
void solve()
{
    string s;
    cin >> s;
    int lt = 1, sum = 0;
    for (int i = s.length() - 1; i >= 0; i--)
    {
        sum += (s[i] - '0') * lt;
        lt *= 2;
        sum %= 10;
        lt %= 10;
    }
    if (sum % 5 == 0)
    {
        cout << "Yes";
    }
    else
    {
        cout << "No";
    }
    cout << endl;
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