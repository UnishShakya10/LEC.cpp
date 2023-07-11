#include<iostream>
using namespace std;

class base
{public:
   base(){
   void display() 
   { 
    cout<<"this is base constructor ";}
    }
     ~base()
   { void display()
   {cout<<"this is base destructor ";}}

};
class child:public base{
public:
    child(){
        void display(){
            cout<<" this is the child class constructor";
        }
    ~child(){
        void display(){
            cout<<"this the destuctor ";
        }
    }
    }

};
int main()
{
base*bptr;
child c;
  
    bptr=&c;
    bptr -> display();
return 0;
}