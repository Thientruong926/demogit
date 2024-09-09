#include <iostream>
#include <cstring>
using namespace std;
int n, x[100], cot[100], d1[100], d2[100];
int a[100][100];
void in()
{
    memset(a, 0, sizeof(a));
    for (int i = 1; i <= n; i++)
    {
        a[i][x[i]] = 1;
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout << a[i][j];
        }
        cout << endl;
    }
    cout << endl;
}
void Try(int i)
{
    for (int j = 1; j <= n; j++)
    {
        if (cot[j] && d1[i - j + n] && d2[i + j - 1])
        {
            x[i] = j;
            cot[j] = d1[i - j + n] = d2[i + j - 1] = 0;
            if (i == n)
            {
                in();
            }
            else
            {
                Try(i + 1);
            }
            cot[j] = d1[i - j + n] = d2[i + j - 1] = 1;
        }
    }
}
int main()
{
    cin >> n;
    for (int i = 1; i < 100; i++)
    {
        cot[i] = d1[i] = d2[i] = 1;
    }
    Try(1);
    return 0;
}