#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    
    int year=n+1;
    
    while(true){
        set<int> st;

        string s=to_string(year);
        for(char ch : s){
            st.insert(ch);
        }
        if(st.size() == s.size()){
            int years=stoi(s);
            cout<<years<<endl;
            return 0;
        }else{
            year++;
        }
    }
  return 0;

}