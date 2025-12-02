#include<bits/stdc++.h>
using namespace std;

int main(){

string m = "Jessica";   
string s;
int r = 0;
getline(cin,s);
stringstream ss(s);
string word;


while (ss>>word)
{
    if(m==word){
        r=1;
        break;
    }
    
}
if(r){
    cout<< "YES" ;
}else
{
    cout<< "NO" ;
    
}



return 0;
}
