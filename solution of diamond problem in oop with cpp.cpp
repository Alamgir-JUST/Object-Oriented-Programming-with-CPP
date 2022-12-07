/*
Solving the diamond problem using the virtual keyword.
Md. Alamgir Hossain
*/
#include<iostream>
using namespace std;
class University{
public:
    University(){
        cout<<"I am the officer of the university"<<endl;
    }
};
class CSE: virtual public University{
public:
    CSE(){
        cout<<"I am the officer of the CSE department"<<endl;
    }
};
class EEE: public virtual University{
public:
    EEE(){
        cout<<"I am the officer of the EEE department"<<endl;
    }
};
class Controll: public CSE, public EEE{
public:
    Controll(){
        cout<<"I am the officer of the Control section"<<endl;
    }
};
int main()
{
    Controll obj;
    return 0;
}

/*
=============Output=============

I am the officer of the university
I am the officer of the CSE department
I am the officer of the EEE department
I am the officer of the Control section
*/

