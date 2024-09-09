#include <iostream>
using namespace std;
void solve()
{
    string s1, s2;
    cin >> s1 >> s2;
    int a1[256] = {0}, a2[256] = {0};
    int ans = INT_MAX, left = 0, sum = 0, indx = -1;
    for (char x : s2)
    {
        a2[x]++;
    }
    for (int i = 0; i < s1.length(); i++)
    {
        a1[s1[i]]++;
        if (a1[s1[i]] <= a2[s1[i]])
            sum++;
        if (sum == s2.length())
        {
            while (a1[s1[left]] > a2[s1[left]] || a2[s1[left]] == 0)
            {
                if (a1[s1[left]] > a2[s1[left]])
                {
                    a1[s1[left]]--;
                }
                left++;
            }
            if (ans > i - left + 1)
            {
                ans = i - left + 1;
                indx = left;
            }
        }
    }
    if (indx == -1)
    {
        cout << "-1";
    }
    else
    {
        cout << s1.substr(indx, ans);
    }
    cout << endl;
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