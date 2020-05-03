#include <iostream>
using namespace std;
/// program to overload the unary operator ++.
///Its a simple example of checking operator overloading
/// In this example ++ is our existing example
class Test
{
private:
    int num=8;///You can also use this way for assigning value
public:
    ///Test(): num(8) {}///Assigning value into num variable
     void operator ++()///operator function for overloading ++ operator
    {                  ///After calling this function the ++ operator will working
        num = num+2;
    }
    void Print()
    {
        cout<<"The Count is: " << num <<endl;
    }
};
int main()
{
    Test obj;
    obj;
    obj.Print();///Printing without overloading
    ++obj;  /// calling of a function "void operator ++()"
    obj.Print();///Printing with ++operator overloading
    return 0;
}

