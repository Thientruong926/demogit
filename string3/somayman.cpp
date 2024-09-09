#include <iostream>
#include <set>
using namespace std;
int tong(int n)
{
    int ans = 0;
    while (n > 0)
    {
        ans += n % 10;
        n /= 10;
    }
    return ans;
}
int chuyendoi(string s)
{
    int ans = 0;
    for (char x : s)
    {
        ans += x - '0';
    }
    return ans;
}
int main()
{
    set<int> se;
    se.insert(9);
    for (int i = 1; i < 1000; i++)
    {
        if (se.find(tong(i)) != se.end())
        {
            se.insert(i);
        }
    }
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        if (se.find(chuyendoi(s)) != se.end())
        {
            cout << '1';
        }
        else
        {
            cout << '0';
        }
        cout << endl;
    }
}