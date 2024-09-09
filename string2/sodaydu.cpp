#include <iostream>
#include <set>
using namespace std;
int solve(string s)
{
    set<char> se;
    if (s[0] == 0)
    {
        return -1;
    }
    for (char x : s)
    {
        if (!isdigit(x))
        {
            return -1;
        }
        se.insert(x);
    }
    if (se.size() == 10)
    {
        return 1;
    }
    return 0;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int tmp = solve(s);
        if (tmp == -1)
            cout << "INVALID";
        else if (tmp == 0)
            cout << "NO";
        else
            cout << "YES";
        cout << endl;
    }
}