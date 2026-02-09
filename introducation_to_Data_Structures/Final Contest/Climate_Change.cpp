#include<bits/stdc++.h>
using namespace std;

int main(){

int n;
cin>> n ;
vector<long long int >a(n);
for (int i = 0; i < n; i++)
{
   cin>> a[i] ;
   
}

long long int sum = 0 ;
for (int i = 0; i < n; i++)
{
   sum += a[i];
}


if(sum%2 != 0){
cout<< 0 ;
return 0;
}

long long int h = sum/2;
long long sum2 = 0;
int count = 0;

for (int i = 0; i < n-1; i++){
    sum2 += a[i];
    if(h == sum2)
    count++;
}





cout<< count ;




return 0;
}


