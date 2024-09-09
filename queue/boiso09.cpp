#include <iostream>
#include <vector>
#include <queue>
#include <cstdlib>
using namespace std;
string init(int n)
{
    queue<string> q;
    q.push("9");
    while (1)
    {
        if (stoi(q.front()) % n == 0)
        {
            return q.front();
        }
        string s = q.front();
        q.pop();
        q.push(s + "0");
        q.push(s + "9");
    }
}
int main()
{
    for (int i = 1; i <= 100; i++)
    {
        cout << i << " " << init(i) << endl;
    }
    return 0;
}