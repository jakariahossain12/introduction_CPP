#include<bits/stdc++.h>
using namespace std;

int* fun(){
    int* a = new int[7];
    for (int i = 0; i < 5; i++)
    {
        cin>>a[i];
    }
    return a;
    
}

int main(){

    int* a = fun();

    cout<<a<<endl;
    cout<<&a[0]<<endl;
    cout<<&a[1]<<endl;
    cout<<&a[2]<<endl;
    cout<<&a[3]<<endl;
    cout<<&a[4]<<endl;
    cout<<&a[5]<<endl;
    cout<<&a[6]<<endl;
    cout<<&a[7]<<endl;

    // for (int i = 0; i < 5; i++)
    // {
    //     cout<<a[i]<<" ";
    // }
    
    

}