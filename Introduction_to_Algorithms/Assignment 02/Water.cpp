#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--) {
        int n;
        cin >> n;

        vector<int> hight(n);
        for(int i=0;i<n;i++) 
        cin >> hight[i];

        int b = INT_MIN;
        int l= 0, r = 0;

        for(int i=0;i<n;i++) {
            for(int j=i+1;j<n;j++) {

                int h = min(hight[i], hight[j]);

                if(h > b) {
                    b = h;
                    l = i;
                    r = j;
                }
            }
        }

        cout << l<< " " << r<< endl;
    }
}