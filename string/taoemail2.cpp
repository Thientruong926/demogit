#include <iostream>
#include <sstream>
#include <vector>
#include <map>
using namespace std;
int main()
{
    int n;
    cin >> n;
    cin.ignore();
    map<string, int> m;
    while (n--)
    {
        string s;
        getline(cin, s);
        for (int i = 0; i < s.length(); i++)
        {
            s[i] = tolower(s[i]);
        }
        vector<string> v;
        stringstream ss(s);
        string word;
        while (ss >> word)
        {
            v.push_back(word);
        }
        string tmp = word;
        for (int i = 0; i < v.size() - 1; i++)
        {
            tmp = tmp + v[i][0];
        }
        cout << tmp;
        if (m.find(tmp) == m.end())
        {
            m[tmp] = 1;
        }
        else
        {
            m[tmp]++;
            cout << m[tmp];
        }
        cout << "@gmail.com" << endl;
    }
}