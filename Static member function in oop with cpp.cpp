#include<iostream>
using namespace std;
class Static_Learning{
private:
    static int id;
    static double result;
public:
    static void Value_Assign(){//Used for assigning values into the static variables
        id = 12345;
        result = 3.50;
        //All data members must be static inside the static member function
    }
    void display()
    {
        cout<<"Id: "<<id<<", Result: "<<result<<endl;
    }
};
int Static_Learning::id;
double Static_Learning::result;
int main()
{
    Static_Learning SL;
    SL.Value_Assign();
    SL.display();
    return 0;
}//Output: Id: 12345, Result: 3.5


