#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a1, a2, a4, a5;
        cin >> a1 >> a2 >> a4 >> a5;

        int ans = 0;

        int count = 0;
        for (int i = -100; i <= 100; i++)
        {

            if (a1 + a2 == i)
                count++;
            if (a2 + i == a4)
                count++;
            if (i + a4 == a5)
                count++;
            ans = max(ans, count);
        }

        cout << ans << endl;
    }
}
