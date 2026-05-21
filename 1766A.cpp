#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin>>n;
        int count=0;
        int temp;
        
        for(int i=1;i<=n;i++){
            temp=i;
            bool flag=true;
            int cnt=0;
            while(temp!=0){
                int rem=temp%10;
                temp/=10;
                if(rem!=0) cnt++;
            }
            if(cnt==1) count++;
        }
        cout<<count<<endl;
    }
}