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
    int consecutive = 0;
    int empt = 0;

    for(auto c:s){
        if(c == '.'){

            empt++;
            consecutive++;
            if(consecutive == 3){
                break;
            }
        }else{
            consecutive = 0;
        }


    }

    if(consecutive == 3){
        cout<< 2 <<endl ;
        
    }else{
        cout<< empt<<endl ;
        
    }
    
    
}



return 0;
}
