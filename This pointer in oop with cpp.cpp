#include<iostream>
using namespace std;
class This_Pointer{
private:
    int id;
    string name;
    double result;
public:
    This_Pointer(int id, string name, double result){
        this->id = id;
        this->name = name;
        this->result = result;
    }
    void display(){
        cout<<"ID: "<<id<<", Name: "<<name<<", Result: "<<result<<endl;
    }
};
int main()
{
    This_Pointer obj(12345, "Abcd", 3.50);
    obj.display();
    return 0;
}
///Output: ID: 12345, Name: Abcd, Result: 3.5
