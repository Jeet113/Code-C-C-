// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         int n,k;
//         cin>>n>>k;
//         int x,ans=0;
//         vector<int>v(n);
//         vector<int>vec1;
//         vector<int>vec2;
//         for(int i=0;i<n;i++){
//             cin>>v[i];
//             if(v[i]%2==0){
//                 vec1.push_back(v[i]);
//             }else{
//                 vec2.push_back(v[i]);
//             }
//         }
//         int size1=vec1.size();
//         int size2=vec2.size();
//         if(k%2==0){
//             for(int i=0;i<size1;i++){
//                 for(int j=0;j<size1;j++){
//                     if(vec1[i]+vec1[j]==k){
//                         ans++;
//                         vec1.erase(vec1.begin()+i);
//                         vec1.erase(vec1.begin()+j);
//                     }
                    
//                 }
//             }
//             for(int i=0;i<size2;i++){
//                 for(int j=0;j<size2;j++){
//                     if(vec2[i]+vec2[j]==k){
//                         ans++;
//                         vec2.erase(vec2.begin()+i);
//                         vec2.erase(vec2.begin()+j);
//                     }   
//                 }
//             }
//         }else{
//             for(int i=0;i<size1;i++){
//                 for(int j=0;j<size2;j++){
//                     if(vec1[i]+vec2[j]==k){
//                         ans++;
//                         vec1.erase(vec1.begin()+i);
//                         vec2.erase(vec2.begin()+j);
//                     }    
//                 }
//             }
//         }
//         //cout<<vec1[3]<<endl;
//         for(auto it:v){
//             cout<<it<<" ";
//         }

//     }
// }
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> v(n);
        vector<int> vec1, vec2;

        for (int i = 0; i < n; i++) {
            cin >> v[i];
            if (v[i] % 2 == 0) {
                vec1.push_back(v[i]);
            } else {
                vec2.push_back(v[i]);
            }
        }

        int ans = 0;

        if (k % 2 == 0) {
            unordered_map<int, int> count1;
            for (int num : vec1) {
                count1[num]++;
            }
            for (int num : vec1) {
                if (count1[num] > 0 && count1[k - num] > 0) {
                    if (num == k - num && count1[num] < 2) continue;
                    ans++;
                    count1[num]--;
                    count1[k - num]--;
                }
            }

            unordered_map<int, int> count2;
            for (int num : vec2) {
                count2[num]++;
            }
            for (int num : vec2) {
                if (count2[num] > 0 && count2[k - num] > 0) {
                    if (num == k - num && count2[num] < 2) continue;
                    ans++;
                    count2[num]--;
                    count2[k - num]--;
                }
            }
        } else {
            unordered_map<int, int> count1, count2;
            for (int num : vec1) count1[num]++;
            for (int num : vec2) count2[num]++;
            for (int num : vec1) {
                if (count1[num] > 0 && count2[k - num] > 0) {
                    ans++;
                    count1[num]--;
                    count2[k - num]--;
                }
            }
        }

        cout << ans << endl;
    }
    return 0;
}
