#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,k;
    cin>>n>>k;

    while(k>0){
        int lastDigit=n%10;
        if(lastDigit == 0){
            n=n/10;
        }else{
            n = n-1;
        }
        k--;
    }
    cout<<n<<endl;

    return 0;
}