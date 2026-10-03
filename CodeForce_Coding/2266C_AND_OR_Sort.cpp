#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        string s;

        cin >> n >> s;

        int firstOne = -1;

        for (int i = 0; i < n; i++) {
            if (s[i] == '1') {
                firstOne = i;
                break;
            }
        }

        if (firstOne == -1) {
            cout << 0 << endl;
            continue;
        }

        int zerosAfter = 0;

        for (int i = firstOne; i < n; i++) {
            if (s[i] == '0') {
                zerosAfter++;
            }
        }

        int onesBefore = 0;
        int answer = zerosAfter;

        for (int i = firstOne; i < n; i++) {
            if (s[i] == '1') {
                onesBefore++;
            } else {
                zerosAfter--;
            }

            answer = min(answer, onesBefore + zerosAfter);
        }

        cout << answer << endl;
    }

    return 0;
}
