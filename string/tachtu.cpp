#include <iostream>
#include <sstream>
using namespace std;
int main()
{
    string s;
    getline(cin, s);
    stringstream ss(s);
    string word;
    int n = 0;
    while (ss >> word)
    {
        n++;
    }
    cout << n;
}