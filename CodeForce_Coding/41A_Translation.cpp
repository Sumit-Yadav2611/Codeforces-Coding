#include <bits/stdc++.h>
using namespace std;

int main() {
    string s, t;
    cin >> s >> t;

    reverse(s.begin(), s.end());
    if (s.size() != t.size()) {
        cout << "NO";
        return 0;
    }

    if (s == t)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}
