#include<bits/stdc++.h>
using namespace std;

int main(){

string s;
cin>> s ;

while (true)
{

    for (int i = 0; i < s.length(); i++)
    {
        if(s[i] == 'A' && s[i+1] == 'B' || s[i] == 'C' && s[i+1] == 'D'){

        }else
        {
            s+=i;
        }
        
    }
    
}



return 0;
}
