#include<bits/stdc++.h>
using namespace std;

int main(){

char s;
cin>> s ;
if (s >= 'a' && s<='z')
{
    cout<<"ALPHA"<<endl<<"IS SMALL";
}else if (s>='A' && s<='Z')
{
    cout<<"ALPHA"<<endl<<"IS CAPITAL";
}else if (s>='0' && s<='9')
{
    cout<<"IS DIGIT";
}





return 0;
}
