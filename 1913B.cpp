// #include<iostream>
// using namespace std;
// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         string s;
//         cin>>s;
//         int len=s.size();
//         int cnt0=0,cnt1=0;
//         for(int i=0;i<len;i++){
//             if(s[i]=='1') cnt1++;
//             else{
//                 cnt0++;
//             }
//         }
//         for(int i=0;i<len;i++){
//             if(s[i]=='1'){
//                 if(cnt0>0) cnt0--;
//                 else break;
//             }
//             else{
//                 if(cnt1>0) cnt1--;
//                 else break;
//             }
//         }
//         cout<<cnt0+cnt1<<endl;
//     }
// }
#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v = {1, 5, 7,7,8,7, 4};

    // Removing 7 from vector v
    v.erase(find(v.begin(), v.end(), 7));

    for (auto i : v)
        cout << i << " ";
    return 0;
}