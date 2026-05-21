#include<bits/stdc++.h>
using namespace std;

int main(){
    long long t;
    cin >> t;
    while(t--){
        long long n, f, c, x, y;
        cin >> n >> f >> c >> x >> y;

        long long fuel = f;

        if(x > y){
            
            long long max_seconds = (fuel - x) / (x - y) + 1;
            if(fuel < x || max_seconds < n) {
               
                long long low = 1, high = n, fail = n + 1;
                while(low <= high){
                    long long mid = (low + high) / 2;
                    long long temp = f;
                    for(long long i = 1; i <= mid; ++i){
                        if(temp < x){
                            fail = i;
                            break;
                        }
                        temp -= x;
                        temp = min(temp + y, c);
                    }
                    if(fail <= n) high = mid - 1;
                    else low = mid + 1;
                }
                cout << "Mission Failed " << low << endl;
            } else {
                cout << "Mission Successful" << endl;
            }
        } else {
           
            for(long long i = 1; i <= min(n, 1000000LL); ++i){
                if(fuel < x){
                    cout << "Mission Failed " << i << endl;
                    goto next_case;
                }
                fuel -= x;
                fuel = min(c, fuel + y);
            }
            cout << "Mission Successful" << endl;
        }
        next_case:;
    }
}
