#include <bits/stdc++.h>
using namespace std;
vector<int> prefix_function(string s)
{
    int n = s.length();
    vector<int> pi(n);
    pi[0] = 0;
    for (int i = 1; i < n; i++)
    {
        int j = pi[i - 1];
        if (j > 0 && s[i] != s[j])
        {
            j = pi[j - 1];
        }
        if (s[i] == s[j])
        {
            j++;
        }
        pi[i] = j;
    }
    return pi;
}
int main()
{
    string s, p;
    cin >> s >> p;
    string gen = p + "#" + s;
    vector<int> prefix_ara;
    prefix_ara = prefix_function(gen);
    for (int i = 0; i < gen.length(); ++i)
    {
        if (prefix_ara[i] == p.length())
        {
            cout << "Matched at " << i - 2 * p.length() + 1 << endl;
        }
    }
}