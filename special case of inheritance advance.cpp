#include<iostream>
using namespace std;
class Student{
public:
    Student(string name){
        cout<<"Name: "<<name<<endl;
    }
};
class CSE: public Student{
public:
    CSE(int id, string name): Student(name){//Passing parameter to the base class constructor
        cout<<"ID: "<<id<<endl;
    }
};
int main()
{
    CSE obj(12345, "Mr. Rahman");
    return 0;
}

/*
=========Output=========
Name: Mr. Rahman
ID: 12345

*/
