#include<bits/stdc++.h>
using namespace std;

int main(){

string s = "jakaria";

s.resize(9,'l');
cout<< s.back()<<endl ;


cout<< s.size() << endl ;
cout<< s << endl ;
s.clear();
cout<< s<<endl ;

cout<< s.capacity()<< endl ;

if(s.empty()){
cout<< "empty" <<endl;

}else
{
    cout<< "not empty" <<endl;
}


return 0;
}
