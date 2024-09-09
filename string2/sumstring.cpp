#include <iostream>
#include <algorithm>
using namespace std;
string cong(string s1, string s2)
{
    if (s1.length() < s2.length())
    {
        swap(s1, s2);
    }
    reverse(s1.begin(), s1.end());
    reverse(s2.begin(), s2.end());
    int len1 = s1.length();
    int len2 = s2.length();
    s2 += string(len1 - len2, '0');
    string res = "";
    int nho = 0;
    for (int i = 0; i < len1; i++)
    {
        int tmp = (s1[i] - '0') + (s2[i] - '0') + nho;
        res += (char)('0' + tmp % 10);
        nho = tmp / 10;
    }
    if (nho)
    {
        res += (char)('0' + nho);
    }
    reverse(res.begin(), res.end());
    return res;
}
bool check(string s, int l, int len1, int len2)
{
    string s1 = s.substr(l, len1);
    string s2 = s.substr(l + len1, len2);
    string s3 = cong(s1, s2);
    // cout << s1 << " " << s2 << " " << s3 << endl;
    if (s3.length() > s.length() - l - len1 - len2)
    {
        return false;
    }
    if (s.substr(l + len1 + len2, s3.length()) == s3)
    {
        if (s3.length() + l + len1 + len2 == s.length())
        {
            return true;
        }
        return check(s, l + len1, len2, s3.length());
    }
    return false;
}
void solve()
{
    string s;
    cin >> s;
    for (int i = 1; i < s.length(); i++)
    {
        for (int j = 1; j < s.length() - i; j++)
        {
            if (check(s, 0, i, j))
            {
                cout << "Yes" << endl;
                return;
            }
        }
    }
    cout << "No" << endl;
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