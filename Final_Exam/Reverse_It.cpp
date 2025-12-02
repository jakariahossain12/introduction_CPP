#include<bits/stdc++.h>
using namespace std;

class Student
{

    public:
    string name;
    int cls;
    string sc;
    int id;

};


int main(){
    int n;
    cin>>n;
    Student a[n];
    int first = 0;
    int lest = n-1;
    for (int i = 0; i < n; i++)
    {
        cin>> a[i].name>>a[i].cls>>a[i].sc>>a[i].id ;
    }
    
    while (first<lest)
    {
        swap(a[first].sc,a[lest].sc);
        first++;
        lest--;
    }

    for (int i = 0; i < n; i++)
    {
        cout<< a[i].name << " "<<a[i].cls<<" "<<a[i].sc<<" "<<a[i].id<<endl ;
    }



return 0;
}
