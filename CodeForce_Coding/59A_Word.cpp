#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int lower = 0, upper = 0;
    for (int i = 0; i <s.size(); i++)
    {

        if (s[i] >= 'a' && s[i] <= 'z')
        {
            lower++;
        }
        else if (s[i] >= 'A' && s[i] <= 'Z')
        {
            upper++;
        }
    }
    if (lower < upper)
    {
        transform(s.begin(), s.end(), s.begin(), ::toupper);
        cout << s << endl;
    }
    else
    {
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        cout << s << endl;
    }
    return 0;
}