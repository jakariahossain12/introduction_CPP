#include<bits/stdc++.h>
using namespace std;

int main(){

list<int>l = {34,234,44,23,453,44};

// l.remove(44);
// l.sort();
// l.sort(greater<int>());

l.sort();
l.unique(); // remove all duplicate value if the list is sorted ;

l.reverse();

for(int v:l){
    cout<< v <<endl ;
    
}

return 0;
}
