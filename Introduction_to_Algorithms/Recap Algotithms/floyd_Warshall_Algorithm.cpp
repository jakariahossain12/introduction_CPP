#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, e;
    if (!(cin >> n >> e)) return 0;

    // Initialize with n+1 to handle 1-based indexing
    vector<vector<int>> mat(n + 1, vector<int>(n + 1));

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (i == j) mat[i][j] = 0;
            else mat[i][j] = INT_MAX;
        }
    }


    while (e--)
    {
        int a,b,c;
        cin>> a>>b>>c ;
        mat[a][b] = c;
        mat[b][a] =c;
    }
    


    for (int k = 1; k <= n; k++)
    {
         for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            
            if(mat[i][k] != INT_MAX && mat[k][j] != INT_MAX && mat[i][k] + mat[k][j] < mat[i][j]){
                mat[i][j] = mat[i][k] + mat[k][j];
            }
        }
    }
    }
    


    bool flage = false;

    for (int i = 1; i <= n; i++)
    {
        if(mat[i][i] < 0){
            flage = true;
        }
    }
    

    if(flage)
    cout<< "cycle" ;
    else
    cout<< "not cycle" ;
    
    
    





  
    // Printing the matrix
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (mat[i][j] == INT_MAX) { // Added '==' here
                cout << "INF" << " ";
            } else {
                cout << mat[i][j] << " ";
            }
        }
        cout << endl;
    }

    return 0;
}