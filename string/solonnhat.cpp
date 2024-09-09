#include <iostream>
#include <sstream>
using namespace std;
void solve()
{
    string s;
    cin >> s;
    s += 'a';
    int sum = 0, max_val = 0;
    for (char x : s)
    {
        if (isdigit(x))
        {
            sum = sum * 10 + x - '0';
        }
        else
        {
            max_val = max(max_val, sum);
            sum = 0;
        }
    }
    cout << max_val << endl;
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