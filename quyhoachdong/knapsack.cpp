#include <iostream>
#include <cstring>
using namespace std;
/*
4 6
2 1 4 3
3 3 4 2
*/
int main()
{
    int n, s;
    cin >> n >> s;
    int w[n + 1], v[n + 1];
    for (int i = 1; i <= n; i++)
    {
        cin >> w[i];
    }
    for (int i = 1; i <= n; i++)
    {
        cin >> v[i];
    }
    int dp[n + 1][s + 1]; // dp[i][j]: gia tri lon nhat cua cai tui khi lua chon cac do vat 1,2,3,...i co trong luong j
    memset(dp, 0, sizeof(dp));
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= s; j++)
        {
            // gia tri lon nhat cua cai tui khi khong lay do vat i
            dp[i][j] = dp[i - 1][j];
            if (j >= w[i])
            {
                // dp[i][j]: gia tri lon nhat cua cai tui khi lay do vat i
                // max(gia tri khi khong cho do vat vao tui, gia tri cua cai tui khi bo di trong luong mon do thu i + gia tri mon do thu i)
                dp[i][j] = max(dp[i][j], dp[i - 1][j - w[i]] + v[i]);
            }
        }
    }
    cout << dp[n][s];
    return 0;
}