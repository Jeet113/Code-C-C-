#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for (auto &u : a)
        {
            cin >> u;
        }
        long long int sum = 0, count = 0;
        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            v.push_back(a[i]);
            int MAX = *max_element(v.begin(), v.end());
            for (int j = 0; j < v.size(); j++)
            {
                sum = sum + v[j];
            }
            sum = sum - MAX;
            if (sum == MAX)
            {
                count++;
            }
            sum = 0;
        }
        cout << count << endl;
    }
}