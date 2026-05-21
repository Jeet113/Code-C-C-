#include <iostream>

using namespace std;

int main()
{
    int n,g,m;
    cin>>n>>g>>m;
    int gla=0,mug=0;
    for(int i=0;i<n;i++){

         if(gla==g) gla=0;
         else if(mug==0) mug+=m;
         else if(mug!=0){
            if(mug-(g-gla)>0){
                    mug=mug-(g-gla);
                    gla=g;
            }
                else {
                    gla=mug;
                    mug=0;
                }
        }
        
    }

    cout<<gla<<" "<<mug;

    return 0;
}