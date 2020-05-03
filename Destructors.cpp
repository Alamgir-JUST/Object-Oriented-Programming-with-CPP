#include <iostream>
using namespace std;
class Prime{
    public:
      ///Constructor
      Prime(){
        cout<<"Constructor is called!!"<<endl;
      }
      ///Destructor
      ~Prime(){
        cout<<"Destructor is called!!"<<endl;
       }
       ///Member function
       void display(){
         cout<<"Prime University!!"<<endl;
       }
};
int main(){
   ///Object created
   Prime obj;
   ///Member function called
   obj.display();

   return 0;
}



