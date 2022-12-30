/*
Implement the following description using C++ language:
Create a class “Bank”.
Declare private variables like BankID, BankName, and Location and
a class constructor that can take any two of declared parameters.
And write a function Print_Values() that can print the constructor’s values.

Create another class “Customer”.
Declare class constructor that can take two parameters like Customer_ID and Amount.
And write a function Print_Values2() that can print the constructor’s values.
Inherit the Bank class from the Customer class.
By creating the main function call the Print_Values2 function of the Customer class.
*/
#include<iostream>
using namespace std;
class Bank{
private:
    int BankID;
    string BankName;
    string Location;
public:
    Bank(int BankID, string BankName){
        this->BankID = BankID;
        this->BankName = BankName;
    }
    void Print_Values(){
        cout<<"Bank ID: "<<BankID<<endl;
        cout<<"Bank Name: "<<BankName<<endl;
    }
};
class Customer: public Bank{
private:
    int Customer_ID;
    double Amount;
public:
    Customer(int Customer_ID, double Amount, int BID, string BName):Bank(BID, BName){
        this->Customer_ID = Customer_ID;
        this->Amount = Amount;
    }
    void Print_Values2(){
        cout<<"Customer ID: "<<Customer_ID<<endl;
        cout<<"Amount: "<<Amount<<endl;
    }
};
int main()
{
    Customer obj(83612, 50000, 14237810, "Prime Bank");
    obj.Print_Values2();
    return 0;
}
/*
============Output=======
Customer ID: 83612
Amount: 50000
*/
