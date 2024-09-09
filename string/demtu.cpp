#include <iostream>
#include <sstream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    cin.ignore();
    string s;
    while (t--)
    {
        getline(cin, s);
        int dem = 0;
        stringstream ss(s);
        string word;
        while (ss >> word)
        {
            dem++;
        }
        cout << dem << endl;
    }
    return 0;
}