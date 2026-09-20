#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    int ans=0;
   
    while(n>0){

        if(n>=5){
            n-=5;
        }else if( n>=4){
            n-=4;
        }else if( n>=3){
            n-=3;
        }else if(n>=2){
            n-=2;
        }else {
            n-=1;
        }
        ans++;
    }
    cout<<ans<<endl;
    return 0;
}