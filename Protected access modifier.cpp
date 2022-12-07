/*
    Example of Protected Access Modifier in CPP
    Alamgir Hossain
    Lecturer, Dept. of CSE
    Prime University
*/
#include<iostream>
using namespace std;
class Parent /// base class
{
    protected: /// protected data members
    string name;
};

class Child : public Parent /// sub class or derived class
{
    public:
    void setName(string PrimeName)
    {
        /// Child class is able to access the inherited
        /// protected data members of base class
        name = PrimeName;
    }
    void displayName()
    {
        cout << "Name is: " << name << endl;
    }
};
int main() {
    Child obj; /// member function of the derived class can
    /// access the protected data members of the base class
    obj.setName("Prime University");
    obj.displayName();
    return 0;
}


