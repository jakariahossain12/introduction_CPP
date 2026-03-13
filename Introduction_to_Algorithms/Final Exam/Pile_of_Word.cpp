#include<bits/stdc++.h>
using namespace std;

int main(){

int t;
cin>> t ;
while (t--)
{
    string s1,s2;
    cin>> s1>>s2 ;
    bool flage = false;
    sort(s1.begin(),s1.end());
    sort(s2.begin(),s2.end());


    if(s1.size() != s2.size()){
        cout<< "NO"<<endl ;
        
    }else{
        for (int i = 0; i < s1.size(); i++)
        {
            if(s1[i] != s2[i]){
                flage = true;
                break;
            }
        }

        if(flage){
            cout<< "NO" <<endl;
            
        }else{
            cout<< "YES"<<endl ;
            
        }
        
    }

    
}



return 0;
}
