#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int i = s.length() - 2;
        while (i >= 0 && s[i] <= s[i + 1])
        {
            i--;
        }
        if (i == -1)
        {
            cout << "-1";
        }
        else
        {
            for (int j = s.length() - 1; j > i; j--)
            {
                if (s[i] > s[j] && s[j] != s[j - 1])
                {
                    swap(s[i], s[j]);
                    break;
                }
            }
            if (s[0] == '0')
            {
                cout << "-1";
            }
            else
            {
                cout << s;
            }
        }
        cout << endl;
    }
}