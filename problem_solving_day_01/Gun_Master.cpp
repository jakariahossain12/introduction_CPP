#include<bits/stdc++.h>
using namespace std;

int main(){

    int c;
    cin>> c ;
    while (c--)
    {
        int n,t;
cin>> n>>t ;

int a[n];
for (int i = 0; i < n; i++)
{
    cin>>a[i];
}
int count = 0;
bool isbig = false;
bool isSort = false;
for (int i = 0; i < n; i++)
{
    if(t<a[i] && !isbig){

        isbig=true;
        isSort=false;
        count++;
    }else if(t>=a[i]&&!isSort){
        if(isbig)
        count++;
        isbig = false;
        isSort = true;
        
    }

}
cout<< count<<endl ;
    }
    
    






return 0;
}
