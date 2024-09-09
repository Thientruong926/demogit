#include <iostream>
#include <vector>
#include <queue>
using namespace std;
vector<string> v;
void init()
{
    queue<string> q;
    q.push("1");
    v.push_back("1");
    while (v.size() < 10000)
    {
        string s = q.front();
        q.pop();
        string s1 = s + "0";
        string s2 = s + "1";
        v.push_back(s1);
        v.push_back(s2);
        q.push(s1);
        q.push(s2);
    }
}
int main()
{
    init();
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cout << v[i] << " ";
        }
        cout << endl;
    }
}