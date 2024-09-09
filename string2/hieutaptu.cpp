#include <iostream>
#include <set>
#include <sstream>
using namespace std;
void solve()
{
    string s1, s2;
    getline(cin, s1);
    getline(cin, s2);
    set<string> se1;
    set<string> se2;
    stringstream ss1(s1);
    stringstream ss2(s2);
    string word;
    while (ss1 >> word)
    {
        se1.insert(word);
    }
    while (ss2 >> word)
    {
        se2.insert(word);
    }
    for (string s : se1)
    {
        if (se2.find(s) == se2.end())
        {
            cout << s << " ";
        }
    }
    cout << endl;
}
int main()
{
    int t;
    cin >> t;
    cin.ignore();
    while (t--)
    {
        solve();
    }
}