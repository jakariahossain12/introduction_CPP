#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >> t;
    while (t--) {
    int n;
    cin >> n;
    string s;
    cin >> s;

    string ns = ""; 

    for (char c : s) {
        if (!ns.empty() && ns.back() == c) {
            ns.pop_back(); 
        } else {
            ns.push_back(c);
        }
    }

    
    cout << ns.size() << endl;
    }

return 0;
}
