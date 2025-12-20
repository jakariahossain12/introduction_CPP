#include<bits/stdc++.h>
using namespace std;

int main(){

string s;
cin>> s ;
int len = s.length();
vector<int>free(26,0);


for (int i = 0; i < len; i++)
{
    int ind = s[i]-'a';
    free[ind]++;
}

for (int i = 0; i < 26; i++)
{
    if(free[i]){
        char f =i+'a';
        cout<<f <<" : "<<free[i]<<endl ;
        
    }
    
}




return 0;
}
