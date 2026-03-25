#include<bits/stdc++.h>
using namespace std;

int main(){

// int n;
// cin>> n ;

// int a[n];



// for (int i = 0; i < n; i++)
// {
//    cin>> a[i] ;
   
// }

// int cur = 0;
// int count = 0;

// for (int i = 1; i < n; i++)
// {
//     if(count == 0){
//         cur = a[i];
//         count = 1;
//     }else if(a[i] == cur){
//         count++;
//     }else{
//         count--;
//     }
// }

// cout<< cur ;





int n;
    if (!(cin >> n)) return 0;
    
    vector<int> a(n);
    unordered_map<int, int> freq;

    int most_frequent_element = -1;
    int max_freq = 0;

    for (int i = 0; i < n; i++) {
        cin >> a[i];
        
        // Increment the count for this number
        freq[a[i]]++;

        // Update the leader if this number now has the highest count
        if (freq[a[i]] > max_freq) {
            max_freq = freq[a[i]];
            most_frequent_element = a[i];
        }
    }

    // Example output for your input [2, 3, 4, 2, 5, 6]
    // max_freq would be 2, and most_frequent_element would be 2.
    cout << "Most frequent: " << most_frequent_element << endl;
    cout << "Occurrences: " << max_freq << endl;


return 0;
}
