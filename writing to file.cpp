#include <iostream>
#include <fstream>
using namespace std;
int main ()
{
    ofstream filestream("text.txt"); ///"text.txt" is the tex file name
    if (filestream.is_open())
    {
        filestream << "Welcome to Prime University.\n";
        filestream << "Depart of CSE.\n";
        filestream.close();
    }
    else cout <<"File opening is fail.";
    return 0;
}

