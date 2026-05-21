#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n, k;
        cin >> n >> k;
        vector<int> v(n);
        for(auto &u : v) cin >> u;

        int ans = 0;
        for(int i = 0; i <= n - k; i++) {
            if(v[i] == 0) {
                bool flag = true;
                for(int j = i; j < i + k; j++) {
                    if(j >= n || v[j] == 1) {
                        flag = false;
                        break;
                    }
                }
                if(flag) {
                    ans++;
                    i = i + k ; 
                }
            }
        }
        cout << ans << endl;
    }
}
