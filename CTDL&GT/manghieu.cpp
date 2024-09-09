#include <iostream>
using namespace std;
int main()
{
    int n, q;
    cin >> n >> q;
    long long a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    long long d[n + 2];
    for (int i = 0; i < n; i++)
    {
        if (i == 0)
        {
            d[i] = a[i];
        }
        else
        {
            d[i] = a[i] - a[i - 1];
        }
    }
    while (q--)
    {
        int l, r, k;
        cin >> l >> r >> k;
        d[l] += k;
        d[r + 1] -= k;
    }
    long long sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += d[i];
        cout << sum << ' ';
    }
    return 0;
}