#include<bits/stdc++.h>
using namespace std;

int sum(int n){
    if(n == 1) return 1;
    int s = sum(n-1);
    return s+n;

}

int main(){

    cout<< sum(5) ;
    


return 0;
}
