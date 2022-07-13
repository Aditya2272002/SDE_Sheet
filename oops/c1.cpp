
/*
Default Constructors 
Static Varaibles 
Ways to define Objects
*/

#include<bits/stdc++.h>
using namespace std;

class Vehical{
   private:
      static int engineCode;

   public:
      static int price;
      const static int code = 786;

      static void getEngineCode(){
         cout<<engineCode<<"\n";
      }

   public:
      string model;
      int speed;
      int milage;


      Vehical(){
         model = "";
         speed = 0;
         milage = 0;
         cout<<"Default Constructor called\n";
      }
};

int Vehical::price = 0; // Initializing static variable
int Vehical::engineCode = 28192;

int main(){
   //ways to create objects
   Vehical audi = Vehical();
   // Vehical tesla;
   // Vehical *nano = new Vehical();

   Vehical::price = 900; // Static variables must be called class Name only
   audi.price = 987; // Not Preffered 

   Vehical::getEngineCode(); // Static functions must be called class Name only
   audi.getEngineCode(); // Not Preffered 

}