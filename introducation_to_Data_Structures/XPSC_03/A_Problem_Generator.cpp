#include<bits/stdc++.h>
using namespace std;

int main(){

int t;
cin>> t ;
while (t--)
{
    int n,m;
    cin>> n>>m ;
    string s;
    cin>> s ;
    int free[7] = {0};
    int need = 0;

    for (auto c:s)
    {
        free[c - 'A']++;
    }
    
    for (int i = 0; i < 7; i++)
    {
        if(free[i] < m){
            need += m-free[i];
        }
    }

    cout<< need <<endl ;
    
    

    
    
}



return 0;
}
