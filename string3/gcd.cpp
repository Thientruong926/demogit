#include <iostream>
using namespace std;
long long du(long long a, string b)
{
    long long res = 0;
    for (char x : b)
    {
        res = res * 10 + (x - '0');
        res %= a;
    }
    return res;
}
long long gcd(long long a, long long b)
{
    if (b == 0)
    {
        return a;
    }
    return gcd(b, a % b);
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long a;
        string b;
        cin >> a >> b;
        long long r = du(a, b);
        cout << gcd(a, r) << endl;
    }
}