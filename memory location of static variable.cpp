#include<iostream>
using namespace std;
class student{
private:
    static int id;
    double res;
public:
    student(int ID, double Res){
        id = ID;
        res = Res;
    }
    void display(){
        cout<<"ID: "<<id++<<", Result: "<<res<<endl;
        cout<<"Memory Address of id: "<<&id<<", and res: "<<&res<<endl;
    }
};
int student::id; //Definition of Static Variable
int main()
{
    student o1(100, 3.50);
    o1.display();
    o1.display();
    o1.display();

    student o2(200, 3.50);
    o2.display();
    o2.display();
    o2.display();
    return 0;
}
/*
======Output=====
ID: 100, Result: 3.5
Memory Address of id: 0x489008, and res: 0x69fee8
ID: 101, Result: 3.5
Memory Address of id: 0x489008, and res: 0x69fee8
ID: 102, Result: 3.5
Memory Address of id: 0x489008, and res: 0x69fee8
ID: 200, Result: 3.5
Memory Address of id: 0x489008, and res: 0x69fee0
ID: 201, Result: 3.5
Memory Address of id: 0x489008, and res: 0x69fee0
ID: 202, Result: 3.5
Memory Address of id: 0x489008, and res: 0x69fee0
*/



