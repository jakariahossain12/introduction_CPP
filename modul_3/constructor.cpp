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

int main(){

    char n[100] = "MD.Jakaria"; // n is a first character  address 
    Student jakaria(n,43,5,4.33);
    cout<< jakaria.name ;
    


return 0;
}
