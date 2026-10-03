#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int ans=0;
    for(int i=0;i<n;i++){
        int pi, qi;
        cin>>pi>>qi;

        if(qi - pi >= 2){
            ans++;
        }
    }
    cout<<ans<<endl;

    return 0;
}