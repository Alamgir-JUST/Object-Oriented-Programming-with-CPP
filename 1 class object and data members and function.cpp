/*
    Example of Defining Class with data members and member function and class in CPP
    Md. Alamgir Hossain
    Lecturer, Dept. of CSE
    Prime University
*/
#include<iostream>
using namespace std;
class Prime///class is keyword, Prime is ClassName
{
    public: /// Access specifier
        /// Data Members
        string name;
        int id;
        double result;
        ///printFunc is not defined inside class definition
        void printPrime()///Member Function
        {
            cout <<"Prime University"<<endl;
        }
};

int main()
{
    Prime obj; /// Declare an object of class Prime
    obj.printFunc(); /// accessing member function
    return 0;
}





