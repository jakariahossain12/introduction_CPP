#include<bits/stdc++.h>
using namespace std;

int main(){

string s;
cin>> s ;

int len = s.length();
int free[26] ={0};

for (int i = 0; i < len; i++)
{
    
    int idex = tolower(s[i])-'a';
    free[idex]++;
}

cout<< min({free['e'-'a'],free['g'-'a'],free['y'-'a'],free['p'-'a'],free['t'-'a']}) ;



return 0;
}
