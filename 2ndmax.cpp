#include<iostream>
using namespace std;
int max(int array[],int size){
    int i,large_index;
    int max=array[0];
    large_index=0;
    for(i=0;i<size;i++){
        if(array[i]>max){
            max=array[i];
            large_index=i;
        }
    }
    return large_index;
}
int main(){
    int n;
    cout<<"Enter size of array:";
    cin>>n;
    int a[n];
    int i;
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    int maxindex=max(a,n);
    a[maxindex]=-1;
    int secondmaxindex=max(a,n);
    cout<<a[secondmaxindex]<<endl;

}