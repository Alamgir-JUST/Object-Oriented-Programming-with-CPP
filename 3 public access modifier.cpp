#include<iostream>
using namespace std;
/*
    Example of  Public access modifier in cpp
*/
// class definition
class Circle
{
public:
    double radius;
    double  compute_area()
    {
        return 3.14*radius*radius;
    }
};
int main()
{
    Circle obj;
    /// accessing public data member outside class
    obj.radius = 10.5;

    cout << "Radius is: " << obj.radius << endl;
    cout << "Area of Circle is: " << obj.compute_area()<< endl;
    return 0;
}




