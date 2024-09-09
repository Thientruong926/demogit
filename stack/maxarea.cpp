#include <iostream>
#include <stack>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int &x : a)
    {
        cin >> x;
    }
    int res = INT_MIN;
    int i = 0;
    stack<int> st;
    while (i < n)
    {
        if (st.empty() || a[i] >= a[st.top()])
        {
            st.push(i);
            i++;
        }
        else
        {
            int idx = st.top();
            st.pop();
            if (st.empty())
            {
                res = max(res, i * a[idx]);
            }
            else
            {
                res = max(res, a[idx] * (i - st.top() - 1));
            }
        }
    }
    while (!st.empty())
    {
        int idx = st.top();
        st.pop();
        if (st.empty())
        {
            res = max(res, i * a[idx]);
        }
        else
        {
            res = max(res, a[idx] * (i - st.top() - 1));
        }
    }
    cout << res;
    return 0;
}