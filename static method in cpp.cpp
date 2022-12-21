#include<iostream>
using namespace std;
void display()
{
    static int num = 1;
    int num2 = 0;
    num++;
    num2++;
    cout<<num<<endl;
    cout<<num2<<endl;
}
int main()
{
    display();
    display();
    return 0;
}

