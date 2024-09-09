#include <iostream>
#include <sstream>
using namespace std;
void solve()
{
    string s;
    cin >> s;
    int tmp = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] < '0' || s[i] > '9')
        {
            s[i] = ' ';
        }
    }
    stringstream ss(s);
    int num;
    while (ss >> num)
    {
        tmp += num;
    }
    cout << tmp << endl;
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