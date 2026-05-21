#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        if(k==1){
            int mx1=0;
            int mx2=0;
            for(int i=1;i<n;i++){
                mx1=max(mx1,a[i]);
            }
            mx1=mx1+a[0];
            for(int i=0;i<n-1;i++){
                mx2=max(mx2,a[i]);
            }
            mx2=mx2+a[n-1];
            cout<<max(mx1,mx2)<<endl;
        }else{
            sort(a.rbegin(), a.rend());
        long long cost = 0;
        for (int i = 0; i <= k; i++) {
            cost += a[i];
        }
        cout << cost << endl;
        }
    }
}