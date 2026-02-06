#include<bits/stdc++.h>
using namespace std;

int main(){

int n,l;
cin>> n ;

vector<int>v(n);

for (int i = 0; i < n; i++)
{
    cin>> v[i] ;
    
}

cin>> l ;

v.push_back(l);

int cur_ind = v.size()-1;

while (cur_ind != 0)
{
    int par_ind = (cur_ind-1)/2;
    if(v[cur_ind] < v[par_ind])
    swap(v[cur_ind], v[par_ind]);
    else
    break;
    cur_ind = par_ind;
}

for(auto c : v)
cout<< c << " " ;





return 0;
}
