#include<bits/stdc++.h>
using namespace std;

void dig(int n){

    if( n == 0){
        return;
    }

    

    dig(n/10);
    cout<< n%10 <<" " ;

}



int main(){



    

    int t;
    cin>> t ;

    while (t--)
    {
        int n;
        cin>> n ;
        if(n == 0){
            cout<<n<<endl  ;
        }else{
            dig(n);
        cout<< endl ;

        }
        
        
    }
    
    











return 0;
}
