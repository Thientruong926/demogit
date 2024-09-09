#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
bool cmp(string a, string b)
{
    string ab = a + b;
    string ba = b + a;
    return ab > ba;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<string> v;
        while (n--)
        {
            string s;
            cin >> s;
            v.push_back(s);
        }
        sort(v.begin(), v.end(), cmp);
        for (int i = 0; i < v.size(); i++)
        {
            cout << v[i];
        }
        cout << endl;
    }
}