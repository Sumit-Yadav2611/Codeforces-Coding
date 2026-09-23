#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    bool flag=true;
    while (n > 0){
        int lastdigit = n % 10;
        if (lastdigit !=4 && lastdigit != 7){
            flag=false;
            break;
        }
         n/=10;
    }
    if(flag){
        cout << "YES"<<endl;
    }else {
        cout<<"NO"<<endl;
    }

    return 0;
}