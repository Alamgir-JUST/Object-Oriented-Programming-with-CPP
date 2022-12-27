/*
Write a program in C++ with the following description:
Create three classes “CPP”, “PYTHON”, and “JAVA” with Private Data Members: Invention_Year, Invented_Country.  Public Member Functions: A parameterized constructor to take and assign values to the data members and print those values.
Inherit the “CPP”, and “PYTHON” classes from the “JAVA” class.
Now test the program by creating an object of the “JAVA” class.
*/
#include<iostream>
using namespace std;
class CPP{
private:
    int Invention_Year;
    string Invented_Country;
public:
    CPP(int IY, string IC){
        Invention_Year = IY;
        Invented_Country = IC;
    }
    void CPP_Print(){
        cout<<"Invented Year of CPP: "<<Invention_Year<<endl;
        cout<<"Invented Country of CPP: "<<Invented_Country<<endl;
    }
};
class PYTHON{
private:
    int Invention_Year;
    string Invented_Country;
public:
    PYTHON(int IY, string IC){
        Invention_Year = IY;
        Invented_Country = IC;
    }
    void PYTHON_Print(){
        cout<<"Invented Year of PYTHON: "<<Invention_Year<<endl;
        cout<<"Invented Country of PYTHON: "<<Invented_Country<<endl;
    }
};
class JAVA: public CPP, public PYTHON{
private:
    int Invention_Year;
    string Invented_Country;
public:
    JAVA(int IY, string IC, int IYC, string ICC, int IYP, string ICP): CPP(IYC, ICC), PYTHON(IYP, ICP){
        Invention_Year = IY;
        Invented_Country = IC;
    }
    void JAVA_Print(){
        cout<<"Invented Year of JAVA: "<<Invention_Year<<endl;
        cout<<"Invented Country of JAVA: "<<Invented_Country<<endl;
    }
};
int main()
{
    JAVA obj(1995, "USA", 1980, "USA", 1980, "Netherlands");
    obj.CPP_Print();
    obj.PYTHON_Print();
    obj.JAVA_Print();
    return 0;
}

/*
==============Output==============
Invented Year of CPP: 1980
Invented Country of CPP: USA
Invented Year of PYTHON: 1980
Invented Country of PYTHON: Netherlands
Invented Year of JAVA: 1995
Invented Country of JAVA: USA
*/
