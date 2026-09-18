#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    
    set<int>st;
    
    for(char ch : s){
        st.insert(ch);
    }
    
    if((st.size() & 1) == 0){
        cout<<"CHAT WITH HER!";
    }else {
        cout<<"IGNORE HIM!";
    }
    return 0;
}