#include<iostream>
#include<string.h>
using namespace std;
class Palindrome
{
    char str[100];
    int length, flag = 0;
public:
    Palindrome(char ch[])
    {
        strcpy(str, ch);
    }
    void calculate()
    {
        length = strlen(str);
        for(int i=0; i < length ; i++)
        {
            if(str[i] != str[length-i-1])
            {
                flag = 1;
                break;
            }
        }
    }
    void show()
    {
        if (flag)
        {
            cout << str << " is not a palindrome" << endl;
        }
        else
        {
            cout << str << " is a palindrome" << endl;
        }
    }
};

int main()
{
    char str[100];
    cout << "Enter a string: ";
    cin >> str;
    Palindrome obj = Palindrome(str);
    obj.calculate();
    obj.show();
    return 0;
}


