#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    vector<string>arr;
    
    for(auto ch : s){
        if(ch == '+'){
            continue;
        }else{
            arr.push_back(string(1, ch));
        }
    }
    sort(arr.begin(),arr.end());
    
    for(int i=0;i<arr.size();i++){
        if(i==arr.size()-1){
            cout<<arr[i];
        }else{
            cout<<arr[i]<<'+';
        }
    }

    return 0;
}