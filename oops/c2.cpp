/*
Inheritance and How to change Inherited class Access Modeifiers.
Overriding
How to Access parent function from child [super keyword in kotlin]



 -> Virtual tells compiler that this function can be overriden in it's child class

*/

#include<bits/stdc++.h>
using namespace std;

class Animal{
   private:
      int animalCode;
   
   protected:
      bool isAnimal;

   public:
      int eyes;
      int legs;
      virtual void heartRate(int count){
         cout<<count<<"\n";
      }

      void print(){
         cout<<"Animal class\n";
      }

      Animal(){
         animalCode = 123;
         isAnimal = true;
         eyes = 2;
         legs = 2;
      }
};

class Human1: public Animal{
   public:
   void b(){
     Animal::heartRate(30); //Super keyword
   }

   // overriding function :- with readable override keyword
   void heartRate(int count) override{
      cout<<"count and speed "<<count<<"\n";
   }// to override we have to make Base Class function Virtual
   
   //overriding
   void print(){
      cout<<"Human1 class\n";
   }
};

class Human2: protected Animal{
   
};

class human2: public Human2{
   public:
      int e;
      human2(){
         this->e = eyes;
      }

      void heartRate2(){
         heartRate(30);
      }
};

class Human3: private Animal{
};


int main()
{
   Human1 h1;
   Human2 h2;
   Human3 h3;


   h1.heartRate(200); // accessing overriden function
   h1.Animal::heartRate(40); // Accessing member of parent form child Object
   h1.print(); // accessing overriden function [NOT READABLE OVERRIDEN FUCNTION]
   h1.Animal::print();  // Accessing member of parent form child Object

   // human2 h;
   // cout<<h.e<<"\n";
   // h.heartRate2();

   // h3.heartRate(30);


   return 0;
}