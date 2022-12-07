#include<iostream>
using namespace std;
class CSE{
public:
    void process(string name){
        cout<<"Name is "<<name<<endl;
    }
};
class Department: public CSE{
public:
    void process(string name){
        cout<<"Name is "<<name<<endl;
    }
};
int main()
{
    Department obj;
    obj.process("Computer Science");//Call the process function Department class
    //How can we access the base class function?
    obj.CSE::process("Computer Science");
    return 0;
}
