#include <iostream>
using namespace std;
class parent {
    public:
    virtual void display(){                 //virtual is the keyword use to select the pointer variable//
    cout<<"this is parent class"; }

};
class child:public parent{
    public:
    void display()
    {cout <<"this is child class"; }
};
int main()
{
    parent*bptr;
    child c;
    bptr=&c;
    bptr -> display();
    return 0;
}