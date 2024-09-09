#include <iostream>
using namespace std;
int main()
{
    int n, k;
    cin >> n >> k;
    int l = n / k;
    if (n % k)
    {
        l++;
    }
    cout << l * (l + 1) / 2;
    return 0;
}