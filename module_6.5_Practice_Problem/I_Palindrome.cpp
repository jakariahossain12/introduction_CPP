#include<bits/stdc++.h>
using namespace std;

int main(){

string s;
cin>> s ;
int isPalindrome = 1;
int first = 0;
int lest = s.size()-1;

while (first<lest)
{
    if(s[first] != s[lest]){
        isPalindrome = 0;
        break;
    }
    first++;
    lest--;
}

if(isPalindrome){
    cout<< "YES" ;
    
}else
{
    cout<< "NO" ;
    
}







return 0;
}
