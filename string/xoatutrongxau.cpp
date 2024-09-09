#include <iostream>
#include <sstream>
#include <vector>
using namespace std;
int main()
{
    string s, x;
    getline(cin, s);
    cin >> x;
    stringstream ss(s);
    string word;
    vector<string> v;
    while (ss >> word)
    {
        if (word != x)
        {
            v.push_back(word);
        }
    }
    for (int i = 0; i < v.size() - 1; i++)
    {
        cout << v[i] << " ";
    }
    cout << v[v.size() - 1];
}