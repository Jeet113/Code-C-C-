// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         long long n,m;
//         cin>>n>>m;
//         long long a[n][m];
//         int b[n*m];
//         for(long long i=0;i<n;i++){
//             for(long long j=0;j<m;j++){
//                 cin>>a[i][j];
//             }
//         }
//         pair<int,int>v[n];
//         for(long long i=0;i<n;i++){
//             int sum=0;
//             for(long long j=0;j<m;j++){
//                 sum+=a[i][j];
//             }
//             v[i].first=sum;
//             v[i].second=i;
//         }
//         sort(v,v+n,greater<int>());
//         for(long long i=0;i<n;i++){
//             for(long long j=0;i<m;j++){
//                 b[i]=a[v[i].second][j];
//             }
//         }
//         long long tempsum=0;
//         long long  temp=n*m;
//         for(long long i=0;i<n*m;i++){
//             tempsum+=b[i]*temp;
//             temp--;
//         }
//         cout<<tempsum<<endl;
//     }
// }
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n, m;
        cin >> n >> m;
        vector<vector<long long>> a(n, vector<long long>(m));

        for (long long i = 0; i < n; i++) {
            for (long long j = 0; j < m; j++) {
                cin >> a[i][j];
            }
        }
        vector<pair<long long, long long>> v(n);
        for (long long i = 0; i < n; i++) {
            long long sum = accumulate(a[i].begin(), a[i].end(), 0LL);
            v[i] = {sum, i};  
        }
        sort(v.rbegin(), v.rend());
        vector<long long> b;
        for (long long i = 0; i < n; i++) {
            for (long long j = 0; j < m; j++) {
                b.push_back(a[v[i].second][j]);
            }
        }
        long long tempsum = 0;
        long long temp = n * m;
        for (long long i = 0; i < n * m; i++) {
            tempsum += b[i] * temp;
            temp--;
        }

        cout << tempsum << endl;
    }
    return 0;
}
