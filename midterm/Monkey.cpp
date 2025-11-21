#include<bits/stdc++.h>
using namespace std;

int main(){
    char s[100002];

    

while (cin.getline(s,100002))
{
    
    int len = strlen(s);
    char r[100002];

    for (int i = 0; i < len; i++)
    {
        
            for (int j = 0; j < len; j++)
            {
            if (s[i] >= 'a' && s[i] <= 'z' && s[j] >= 'a' && s[j] <= 'z') {
                    if (s[i] < s[j]) {
                        swap(s[i], s[j]);
                    }
                }

            }
            
        
    }


   for (int i = 0; i < len; i++)
   {
    if(s[i] >='a' && s[i]<='z'){
        cout<< s[i] ;
        
    }
  }
   
  cout<< endl ;
  


    
    
    
    
    
}


return 0;
}
