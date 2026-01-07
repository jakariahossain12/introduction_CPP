#include<bits/stdc++.h>
using namespace std;

int main(){

    list<int>l = {34,24,23,53,23};
    list<int>l2 = {344,244,234};
    
// l.push_front(444);
// l.push_back(444);
// l.pop_back();
// l.pop_front();

// l.insert(next(l.begin(),1),l2.begin(),l2.end());

// l.erase(next(l.begin(),1),next(l.begin(),4));

replace(l.begin(),l.end(),23,200);

auto it = find(l.begin(),l.end(),200);
if(it == l.end())
cout<< "Not found"<<endl ;
else
cout<< "found"<<endl ;



for(int v:l){
    cout<< v<<endl ;
    
}

return 0;
}
