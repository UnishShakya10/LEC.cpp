//constructor invocation and data member initialisatio

//consinvodtmemini.cpp

#include<iostream> 
using namespace std;

class base{

protected:

int numl,num2;

public:

base (int nl, int n2) :num1 (n1), num2 (n2) {}
};
class derived: public base
{
private:
    int vall, val2;
public:
    derived (int vl, int v2, int v3)
    :vall (vl),base (v1, v2), val2(v3){}
void display()
{
cout<<"num1="<<numl<<endl;
cout<<"num2="<<num2 <<endl;
cout <<"val1="<<vall<<endl; 
cout<<"val2 ="<<val2<<endl; }
};
int main()
{
derived d(5,7,12);

d.display ()  
return 0;
}