#include<bits/stdc++.h>
using namespace std;

int main(){

int n,e;
cin>> n>>e ;

int adj_max[n][n];

for (int i = 0; i < n; i++)
{
    for (int j = 0; j < n; j++)
    {
        if(i == j){
            adj_max[i][j] = 0;
        }else{
            adj_max[i][j] = INT_MAX;
        }
    }
    
}

while (e--)
{
    int a,b,c;
    cin>> a>>b>>c ;

    adj_max[a][b] = c;
    
}



for (int k = 0; k < n; k++)
{
    for (int i = 0; i < n; i++)
    {
       for (int j = 0; j < n; j++)
        {
            if(adj_max[i][k] != INT_MAX && adj_max[k][j] != INT_MAX && adj_max[i][k] + adj_max[k][j] < adj_max[i][j] ){
               adj_max[i][j] =  adj_max[i][k] + adj_max[k][j] ;
            }
        
        }
    
     }
}




for (int i = 0; i < n; i++)
{
    for (int j = 0; j < n; j++)
    {
       if(adj_max[i][j] == INT_MAX){
        cout<< "INT" << " " ;
       }else{
        cout<< adj_max[i][j] <<" " ;
       }
    }
    cout<< endl ;
    
}





return 0;
}
