#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int num(char c)
{
    return c - '0';
}
string tich(string a, string b)
{
    reverse(a.begin(), a.end());
    reverse(b.begin(), b.end());
    int len1 = a.length(), len2 = b.length();
    string v = string(len1 + len2 - 1, '0');
    int nho = 0;
    for (int i = 0; i < len2; i++)
    {
        for (int j = 0; j < len1; j++)
        {
            int idx = num(v[i + j]) + num(a[j]) * num(b[i]) + nho;
            v[i + j] = idx % 10 + '0';
            cout << v[i + j];
            nho = idx / 10;
        }
        cout << endl;
    }
    if (nho)
    {
        v += char(nho + '0');
    }
    reverse(v.begin(), v.end());
    return v;
}
int main()
{
    int k;
    cin >> k;
    string a[k];
    for (int i = 0; i < k; i++)
    {
        cin >> a[i];
    }
    string c;
    cin >> c;
    string res = a[0];
    for (int i = 1; i < k; i++)
    {
        res = tich(res, a[i]);
    }
    cout << res;
    return 0;
}