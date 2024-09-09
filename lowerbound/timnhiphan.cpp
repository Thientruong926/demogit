#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
/*bool binary_search(int a[], int l, int r, int x)
{
    if (l > r)
    {
        return false;
    }
    int m = (l + r) / 2;
    if (a[m] == x)
    {
        return true;
    }
    if (a[m] < x)
    {
        return binary_search(a, m+1 , r, x);
    }
    if (a[m] > x)
    {
        return binary_search(a, l, r - 1, x);
    }
}*/
int first_pos(int a[], int n, int x)
{
    int res = -1, l = 0, r = n - 1;
    while (l <= r)
    {
        int m = (l + r) / 2;
        if (a[m] == x)
        {
            res = m;
            r = m - 1;
        }
        else if (a[m] < x)
        {
            l = m + 1;
        }
        else
        {
            r = m - 1;
        }
    }
    return res;
}
int last_pos(int a[], int n, int x)
{
    int res = -1, l = 0, r = n - 1;
    while (l <= r)
    {
        int m = (l + r) / 2;
        if (a[m] == x)
        {
            res = m;
            l = m + 1;
        }
        else if (a[m] < x)
        {
            l = m + 1;
        }
        else
        {
            r = m - 1;
        }
    }
    return res;
}
int main()
{
    int n, x;
    cin >> n >> x;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    auto it = upper_bound(a.begin(), a.end(), x);
    if (it == a.end())
    {
        cout << "khong tim thay phan tu nao trong vector lon hon" << x << endl;
    }
    return 0;
}