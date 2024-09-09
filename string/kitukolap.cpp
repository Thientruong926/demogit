#include <iostream>
#include <map>
using namespace std;
int main()
{
    int t;
    cin >> t;
    cin.ignore();
    string s;
    while (t--)
    {
        getline(cin, s);
        map<char, int> m;
        for (char x : s)
        {
            m[x]++;
        }
        for (auto x : m)
        {
            if (x.second == 1)
            {
                cout << x.first;
            }
        }
        cout << endl;
    }
}