#include<bits/stdc++.h>
using namespace std;
// this is the class
class Student {
    public:
    char name[100];
    int age;
    int roll;
    double gpa;
};


int main(){

    // student is class but a is object
    Student a,b ;

    cin>> a.name>>a.age>>a.roll>>a.gpa ;
    cout<< a.gpa << a.name<<endl ;
    
    cin.ignore();
    
    cin.getline(b.name,100);
    cin>> b.age>> b.gpa>>b.roll ;
    cout<< b.name<<b.age ;
    
    


return 0;
}
