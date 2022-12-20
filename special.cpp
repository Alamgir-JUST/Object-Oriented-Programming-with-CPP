#include<iostream>
using namespace std;
class parent{
protected:
    int num;
public:
    parent(int number){
        cout<<"Value of the constructor's variable of base class: "<<number<<endl;
    }
};
class child: public parent{
public:
    child(int x, int y): parent(y){
        num = x;
        cout<<"Value of the protected variable: "<<num<<endl;
    }
};
int main()
{
    child ob(10, 20);
    return 0;
}
/*
=======Output==========
Value of the constructor's variable of base class: 20
Value of the protected variable: 10
*/


