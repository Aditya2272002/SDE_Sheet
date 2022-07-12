#include<bits/stdc++.h>
using namespace std;

/*
When we create a derived class object it first call Base class
default constructor, if default constructor is not present 
then we have to initialize the base class constructor in 
derived class other wise we get compilation error. 
*/

class A{
   private:
   int temp=10;
   public:
      int x = 100;
      int t;

    A(int t){
      this->t = t;
    }  
};

class B: public A{
   public:
   int p;
   B(int p):A(10){
      this->p = p;
   }
};


class C{
   public:
   int x;
};

class D:public C{
   public:
   int p;
   D(int p){
      this->p = p;
      cout<<x<<"\n";
   }
};


int main(){
   B b = B(20);

   D d = D(30);
   cout<<d.x<<"\n";

}
