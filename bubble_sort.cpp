// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int a[n];
//     for(int i=0;i<n;i++){
//         cin>>a[i];
//     }
//     int temp;
//     for(int i=0;i<n-1;i++){
//         //   int count=0;
//         for(int j=i+1;j<n;j++){
//             if(a[i]>a[j]){
//                 temp=a[i];
//                 a[i]=a[j];
//                 a[j]=temp;
//                 //count++;
//             }
//         }
//         // if(count==0){
//         //     break;
//         // }
//     }
//     for(int i=0;i<n;i++){
//         cout<<a[i]<<" ";
//     }
// }
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int temp;
    for(int i=0;i<n-1;i++){
        //   int count=0;
        for(int j=i+1;j<n;j++){
            if(a[i]>a[j]){
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
                //count++;
            }
        }
        // if(count==0){
        //     break;
        // }
    }
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}
