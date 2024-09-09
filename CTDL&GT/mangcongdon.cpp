#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int f[n];
    for (int i = 0; i < n; i++)
    {
        if (i == 0)
        {
            f[i] = a[i];
        }
        else
        {
            f[i] = f[i - 1] + a[i];
        }
    }
    int q, l, r;
    cin >> q;
    while (q--)
    {
        cin >> l >> r;
        l--;
        r--;
        if (l == 0)
        {
            cout << f[r] << endl;
        }
        else
            cout << f[r] - f[l - 1] << endl;
    }
}