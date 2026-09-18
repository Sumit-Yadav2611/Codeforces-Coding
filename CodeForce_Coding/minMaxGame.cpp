#include <bits/stdc++.h>
using namespace std;

  int main(){
      int t;
      cin>>t;
      
      while(t--){
          int n;
          cin>>n;
          
         int ones=0;
         for(int i=0;i<n;i++){
             int x;
             cin>>x;
             if(x==1){
                 ones++;
             }
         }
         if(ones*2 >= n){
             cout<<"Bessie"<<endl;
         }else{
             cout<<"Elise"<<endl;
         }
      }
      return 0;
  }