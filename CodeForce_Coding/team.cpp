#include <bits/stdc++.h>
using namespace std;

#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    int answer=0;
    for(int i=0;i<n;i++){
        int a, b, c;
        cin>>a>>b>>c;

        if(a+b+c>=2) 
            answer++;
    } 

    cout<<answer<<endl;    
    return 0;
}