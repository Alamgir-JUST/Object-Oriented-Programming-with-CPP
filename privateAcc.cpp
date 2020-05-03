#include<iostream>
using namespace std;
class Circle
{
    /// private data member
    private:
        double radius;
        /// public member function
    public:
        void compute_area()
        {
            /// member function can access private
            /// data member radius
            //radius = r;
            double area = 3.14*radius*radius;
            cout << "Radius is: " << radius << endl;
            cout << "Area is: " << area << endl;
        }
};
int main()
{
    /// creating object of the class
    Circle obj;
    /// trying to access private data member
    /// directly outside the class
    obj.radius = 5.5;
    obj.compute_area();
    return 0;
}


