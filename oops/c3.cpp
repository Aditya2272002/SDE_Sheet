#include<bits/stdc++.h>
using namespace std;

// A virtual keyword is an indication to the compiler that a method may be overridden in derived classes

class A{
   public:
      int x = 100;
      int t;
};

class B: virtual public A{};

class C : virtual public A{};

class D : public B, public C{};

int main(){
   D d;
   cout<<d.x; //ERROR :- x is ambigous

}

/*

      B----> A <----C

      B <---- D ----> C   

      D get confused from where i have to get x??? 

      We use Virtual function :-
         It helps in Acheiving Run Time 
      Polymorphism.

      So after applying virtual keyword constructor of A 
      called only once.v



*/