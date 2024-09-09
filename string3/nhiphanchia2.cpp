#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        int x;
        cin >> s >> x;
        int tmp = 0;
        for (int i = s.length() - 1; i >= 0; i--)
        {
            if (s[i] == '0')
            {
                tmp++;
            }
            else
            {
                break;
            }
            if (tmp == x)
            {
                break;
            }
        }
        if (tmp == x)
        {
            cout << "YES";
        }
        else
        {
            cout << "NO";
        }
        cout << endl;
    }
}