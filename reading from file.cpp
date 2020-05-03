#include <iostream>
#include <fstream>
using namespace std;
int main ()
{
    string str;
    ifstream filestream("text.txt");
    if (filestream.is_open())
    {
        while ( getline (filestream,str) )
        {
            cout << str <<endl;
        }
        filestream.close();
    }
    else
    {
        cout << "File opening is fail."<<endl;
    }
    return 0;
}
