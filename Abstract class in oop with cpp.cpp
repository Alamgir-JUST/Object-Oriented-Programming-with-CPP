#include<iostream>
using namespace std;
class Shape{
protected:
    double height;
    double width;
public:
    virtual void Area() = 0;
    void setHeight(double h){
        height = h;
    }
    void setWidht(double w){
        width = w;
    }
};
class Rectangle: public Shape{
public:
    void Area(){
        double area = height * width;
        cout<<"Area of the Rectangle is: "<<area<<endl;
    }
};
class Triangle: public Shape{
public:
    void Area(){
        double area = .5 * height * width;
        cout<<"Area of the Triangle is: "<<area<<endl;
    }
};
int main()
{
    //Shape ob;
    //cannot declare variable 'ob' to be of abstract type 'Shape'
    Rectangle rec;
    rec.setHeight(10.5);
    rec.setWidht(5.5);
    rec.Area();

    Triangle tri;
    tri.setHeight(15.5);
    tri.setWidht(7.5);
    tri.Area();
    return 0;
}
