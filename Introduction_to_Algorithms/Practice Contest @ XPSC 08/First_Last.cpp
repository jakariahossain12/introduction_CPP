#include <bits/stdc++.h>
using namespace std;

int main() {
   
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    if (!(cin >> n)) return 0;

   
    map<long long, pair<int, int>> m;

    for (int i = 1; i <= n; i++) {
        long long val;
        cin >> val;

       
        if (m.find(val) == m.end()) {
            m[val] = {i, i}; 
        } else {
            m[val].second = i;
        }
    }

   
    for (auto p : m) {
        cout << p.first << " " << p.second.first << " " << p.second.second << "\n";
    }

    return 0;
}