#include <iostream>
#include <queue>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        priority_queue<int, vector<int>, greater<int>> pq;
        while (n--)
        {
            int x;
            cin >> x;
            pq.push(x);
        }
        long long t = 0;
        while (pq.size() > 1)
        {
            int top1 = pq.top();
            pq.pop();
            int top2 = pq.top();
            pq.pop();
            t += top1 + top2;
            pq.push(top1 + top2);
        }
        cout << t;
    }
}