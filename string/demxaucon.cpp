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
        int tmp = s.length();
        for (auto x : m)
        {
            tmp += (x.second * (x.second - 1)) / 2;
        }
        cout << tmp << endl;
    }
}