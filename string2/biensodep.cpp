#include <iostream>
using namespace std;
bool tangchat(string s)
{
    for (int i = 0; i < s.length() - 1; i++)
    {
        if (s[i] >= s[i + 1])
        {
            return false;
        }
    }
    return true;
}
bool locphat(string s)
{
    for (char x : s)
    {
        if (x != '6' && x != '8')
        {
            return false;
        }
    }
    return true;
}
bool babanghai(string s)
{
    if (s[0] == s[1] && s[1] == s[2] && s[3] == s[4])
    {
        return true;
    }
    return false;
}
void solve(string s)
{
    string k = s.substr(5, 3) + s.substr(9);
    // cout << k << endl;
    if (tangchat(k) || locphat(k) || babanghai(k))
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    cout << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        solve(s);
    }
}