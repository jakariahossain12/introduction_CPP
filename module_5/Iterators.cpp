#include<bits/stdc++.h>
using namespace std;

int main(){

string s ="jakaria";


cout<< *s.begin()<<endl ;// first chart print

cout<< *(s.end()-1)<<endl ;// lest chart print


for (string::iterator it = s.begin(); it < s.end(); it++)
{
    cout<< *it <<endl ;
    
}


return 0;
}
