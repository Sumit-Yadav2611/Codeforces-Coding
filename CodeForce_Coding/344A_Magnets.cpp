#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int group=0;
    string prev, curr;
    for(int i=0;i<n;i++){
        cin>>curr;

        if(curr!=prev){
            group++;
        }
        prev=curr;
    }
    cout<<group;

    return 0;
}