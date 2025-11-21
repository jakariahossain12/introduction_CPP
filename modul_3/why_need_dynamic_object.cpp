#include<bits/stdc++.h>
using namespace std;

class Student {
    public:
    char name[100];
    int age;
    int role;
    double gpa;
    // this constructor char* name receives a address because char n is a array
    Student(char* name,int age , int role,double gpa){
        strcpy(this->name, name);
        this->age = age;
        this->gpa = gpa;
        this->role = role;
        
    }
};

// this function return a object this function return value it's work
Student fun(){
    char n[100] = "sumon";
    Student sumon(n,23,2.33,2);
    return sumon;

}
// this fuction return a address or pointer it's not work because it is static memory after run code this all function remove from the memory
Student* fun2(){
    char n[100] = "tandra";
    Student sumon(n,23,2.33,2);
    Student* p = &sumon;
    return p;

}


int main(){

    char n[100] = "MD.Jakaria"; // n is a first character  address 
    Student jakaria(n,43,5,4.33);
    cout<< jakaria.name<<endl ;

// this fun fuction return properly
    Student obj = fun();
    cout<< obj.name <<endl;

// this fuction return a address or pointer it's not work because it is static memory after run code this all function remove from the memory
// that way need dynamic object
    Student* obj2 = fun2();
    cout<<  obj2->name;
    



return 0;
}
