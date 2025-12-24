#include<bits/stdc++.h>
using namespace std;
// this is the pointer ;
void pointer(int*p ){
    int y =200;
    p =&y;
    cout<< "in fun  : "<< &p<<endl ; // this is the different addresss c;
}

// this is the Reference 

void reference(int *&p){
      int y =200;
    p =&y;
    cout<< "Rin fun  : "<< p<<endl ; // this is the same  addresss c;
}

int main(){

int a = 10;
int* x = &a;

pointer(x);
cout<<"main : " << x<<endl ;

int b = 40;
int* c = &b;
reference(c);

cout<<"Rmain : " << c<<endl ;






return 0;
}
