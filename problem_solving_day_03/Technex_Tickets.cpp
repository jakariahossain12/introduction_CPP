#include <bits/stdc++.h>
using namespace std;

int main() {
    int T; 
    cin >> T;
    while (T--) {
        int N; 
        cin >> N;

        int seconds;
        if (N == 1) {
            seconds = 1;
        } else if (N % 2 == 0) {
            seconds = N / 2 + 1;       // even positions
        } else {
            seconds = (N - 1) / 2;     // odd positions (>=3)
        }

        cout << seconds << '\n';
    }
    return 0;
}