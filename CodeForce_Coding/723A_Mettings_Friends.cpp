#include <bits/stdc++.h>
#include <math.h>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    
    if (a < b && b < c || a > b && b > c) 
    {
        cout << abs(a - b) + abs(b - c);
    }
    else if (b < a && a < c || b > a && a > c)
    {
        cout << abs(a - b) + abs(a - c);
    }
    else
    {
        cout << abs(c - a) + abs(c - b);
    }

    return 0;
}