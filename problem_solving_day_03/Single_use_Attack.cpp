#include<bits/stdc++.h>
using namespace std;

int main(){

int t;
cin>> t ;
while (t--)
{
    int h,x,y;
    cin>> h>>x>>y ;
    double n= (double)h/x;
    int normal = ceil(n);
    if(h<=y){
        cout<< "1" <<endl;
    }else
    {
        int c = h-y;
        double sp = (double)c/x;
        int mi = ceil(sp);
        cout<< min(normal,mi+1)<<endl ;
        
    }
    
    
}



return 0;
}
