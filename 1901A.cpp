#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int a[n];
        int dif1 = 0;
        int dif2;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int d;
        int pre = 0;
        dif2 = 2 * (k - a[n - 1]);
        for (int i = 0; i < n; i++)
        {
            d = a[i] - pre;
            pre = a[i];
            dif1 = max(dif1, d);
        }
        cout << max(dif1, dif2) << endl;
    }
}