#include <iostream>
using namespace std;
string namtsau(string s)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '5')
        {
            s[i] = '6';
        }
    }
    return s;
}
string sautnam(string s)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '6')
        {
            s[i] = '5';
        }
    }
    return s;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s1, s2;
        cin >> s1 >> s2;
        cout << stoll(sautnam(s1)) + stoll(sautnam(s2)) << " ";
        cout << stoll(namtsau(s1)) + stoll(namtsau(s2)) << endl;
    }
}