#include <iostream>
#include <queue>
#include <map>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int k;
        cin >> k;
        string s;
        cin >> s;
        map<char, int> mp;
        for (char x : s)
        {
            mp[x]++;
        }
        priority_queue<int> pq;
        for (pair<char, int> x : mp)
        {
            pq.push(x.second);
        }
        while (k--)
        {
            int top = pq.top();
            pq.pop();
            top--;
            pq.push(max(top, 0));
        }
        long long t = 0;
        while (!pq.empty())
        {
            t += pq.top() * pq.top();
            pq.pop();
        }
        cout << t;
    }
    return 0;
}