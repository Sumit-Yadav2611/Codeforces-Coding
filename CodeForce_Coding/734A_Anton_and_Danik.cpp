#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    int cntA=0;
    for(int i=0;i<s.size();i++){
        if(s[i]=='A'){
            cntA++;
        }
    }
    
    if( s.size()  < 2*cntA ){
        cout<<"Anton"<<endl;
    }else if( s.size() > 2*cntA ){
            cout<<"Danik"<<endl;
    }else{
        cout<<"Friendship"<<endl;       
    }
    return 0;
}