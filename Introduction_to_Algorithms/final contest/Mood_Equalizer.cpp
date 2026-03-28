#include<bits/stdc++.h>
using namespace std;

int main(){

int n;
cin>> n ;

vector<int>a(n+1);

long long int one = 0;
long long int mainach = 0;
long long int count =0;


for (int i = 0; i < n; i++)
{
    cin>> a[i] ;
    count+=a[i];
    if(a[i] == -1){
        mainach++;
    }else if(a[i] == 1){
        one++;
    }
    
}



if(mainach == 0){
    cout<< 0 ;
    
}else if (mainach<one ){
    cout<< 0 ;
    
}else if(count <0){

    cout<< abs(count) ;
    
}
else{
    cout<< abs(one - mainach) ;
    
}




return 0;
}
