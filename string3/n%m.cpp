#include <iostream>
using namespace std;
void solve()
{
    string s;
    long long m;
    cin >> s >> m;
    long long r = 0;
    for (char x : s)
    {
        r = r * 10 + (x - '0');
        r %= m;
    }
    cout << r << endl;
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