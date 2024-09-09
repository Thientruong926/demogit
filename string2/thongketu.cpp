#include <iostream>
#include <map>
#include <sstream>
#include <vector>
#include <algorithm>
using namespace std;
bool cmp(pair<string, int> a, pair<string, int> b)
{
    if (a.second != b.second)
    {
        return a.second > b.second;
    }
    return a.first < b.first;
}
int main()
{
    int n;
    cin >> n;
    cin.ignore();
    map<string, int> mp;
    while (n--)
    {
        string s;
        getline(cin, s);
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == '.' || s[i] == ',' || s[i] == '!' || s[i] == '?' || s[i] == '-')
            {
                s[i] = ' ';
            }
        }
        stringstream ss(s);
        string word;
        while (ss >> word)
        {
            mp[word]++;
        }
    }
    vector<pair<string, int>> v;
    for (auto it : mp)
    {
        v.push_back(it);
    }
    sort(v.begin(), v.end(), cmp);
    for (auto it : v)
    {
        cout << it.first << " " << it.second << endl;
    }
}