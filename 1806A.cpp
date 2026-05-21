#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long a, b, c, d;
        cin >> a >> b >> c >> d;
        if (d < b)
        {
            cout << -1 << endl;
        }
        else
        {
            int move1, move2;
            move1 = abs(d - b);
            b += move1;
            a += move1;
            move2 = abs(c - a);
            if ( a < c)
                cout << -1 << endl;
            else
            {
                cout << move1 + move2 << endl;
            }
        }
    }
}