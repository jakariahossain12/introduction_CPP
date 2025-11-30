#include<bits/stdc++.h>
using namespace std;

int main(){

int t;
cin>> t ;
while (t--)
{
    int n;
    cin>> n ;
    
    string s;
    cin>> s ;
    
    bool free[26] = {false};
    int mark = 0;

    for (int i = 0; i < n; i++)
    {
        int index = s[i]-'A';
        if(free[index] == false){
            mark+=2;
            free[index] = true;
        }else
        {
            mark++;
        }
        
    }
    
    cout<< mark<<endl ;
    


    
}



return 0;
}
