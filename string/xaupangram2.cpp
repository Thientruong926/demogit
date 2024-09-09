#include <iostream>
#include <set>
using namespace std;
int main()
{
    int t, k;
    cin >> t;
    string s;
    while (t--)
    {
        cin >> s >> k;
        if (s.length() < 26)
        {
            cout << '0' << endl;
            continue;
        }
        set<char> se;
        for (char x : s)
        {
            se.insert(x);
        }
        if (k >= 26 - se.size())
        {
            cout << '1' << endl;
        }
        else
        {
            cout << '0' << endl;
        }
    }
    return 0;
}