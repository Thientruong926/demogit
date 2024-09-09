#include <iostream>
#include <vector>
#include <queue>
using namespace std;
void init(int n)
{
    vector<string> v;
    queue<string> q;
    v.push_back("6");
    v.push_back("8");
    q.push("6");
    q.push("8");
    while (1)
    {
        string s = q.front();
        q.pop();
        string s1 = s + "6";
        string s2 = s + "8";
        if (s1.length() > n)
        {
            break;
        }
        q.push(s1);
        q.push(s2);
        v.push_back(s1);
        v.push_back(s2);
    }
    for (int i = v.size() - 1; i >= 0; i--)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        init(n);
    }
}