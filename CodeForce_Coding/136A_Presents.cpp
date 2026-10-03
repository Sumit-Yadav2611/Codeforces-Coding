#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;

    vector<int>answer(n+1);
    for(int i=1;i<=n;i++){
        int p;
        cin>>p;

        answer[p]=i;
    }

    for(int i=1;i<=n;i++){
        cout<<answer[i]<<" ";
    }
    return 0;
}