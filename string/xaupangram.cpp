#include <iostream>
using namespace std;

int main()
{
    bool a[26];
    for (int i = 0; i < 26; i++)
    {
        a[i] = false;
    }
    string s;
    cin >> s;
    for (char x : s)
    {
        a[x - 'a'] = true;
    }
    for (int i = 0; i < 26; i++)
    {
        if (!a[i])
        {
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";
    return 0;
}