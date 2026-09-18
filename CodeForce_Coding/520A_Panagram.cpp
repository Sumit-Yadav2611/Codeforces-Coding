#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;

    set<int> st;

    for (auto ch : s)
    {
        
        st.insert(tolower(ch));
    }
    if (st.size() == 26)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    return 0;
}