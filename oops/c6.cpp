#include<bits/stdc++.h>
using namespace std;


/*
Interface are implemented using Abstract Class in C++:-
Abstract Class
https://www.educative.io/answers/what-is-a-cpp-abstract-class

*/

class Animal{
   public:
      virtual void eat() = 0;
};

class Dog:public Animal{
   public:
   void eat(){
      cout<<"Eating Dog"<<"\n";
   }
};


int main(){
   Dog d;
   d.eat();
}