#include<bits/stdc++.h>
using namespace std;



int main(){

long long int n;
cin>> n ;
bool isLucky = false;
while (n != 0)
{
    long long int a = n%10;
    if(a == 7){
        isLucky = true;
        break;
    }
    n = n/10;
}

if(isLucky)
cout<< "Lucky" ;
else
cout<< "Not Lucky" ;









return 0;
}
