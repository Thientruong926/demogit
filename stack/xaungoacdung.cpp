#include <iostream>
#include <stack>
using namespace std;
void solve()
{
    string s;
    cin >> s;
    stack<char> st;
    for (char x : s)
    {
        if (x == '(')
        {
            st.push(x);
        }
        else
        {
            if (st.empty())
            {
                cout << "ko hop le" << endl;
                return;
            }
            else
            {
                st.pop();
            }
        }
    }
    if (st.empty())
    {
        cout << "hop le" << endl;
    }
    else
    {
        cout << "ko hop le" << endl;
    }
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