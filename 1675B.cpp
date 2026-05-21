#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            int y;
            cin >> y;
            v.push_back(y);
        }
        int count = 0;
        for (int i = n - 1; i >= 1; i--)
        {
            while (v[i - 1] >= v[i] && v[i - 1] != 0)
            {
                v[i - 1] = v[i - 1] / 2;
                count++;
            }
        }
        int flag = 0;
        for (int i = 1; i < n; i++)
        {
            if (v[i] == 0)
                flag = 1;
        }
        if (flag)
            cout << -1 << '\n';
        else
            cout << count << '\n';
    }
}