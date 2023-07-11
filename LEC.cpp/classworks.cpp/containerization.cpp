#include <iostream>
using namespace std;
class A
{
public:
int data;
void getdata()
    {
    cout <<"enter the data: ";
    cin >>data;
    }
    void showdata(){
    cout <<"the value of A is :"<<data;
    }
};
class b{
    public:
     A a;
     int b ;
     void getdata()
    {     a.getdata();
        cout<<"enter the value of b"<<end;
        cin >>"b";
    }
    voidshowdata(){
     A.showdata();
     cout<< "show the value of b"<<end1;
    }

     
};
int main()
{
    a.b1;
    b1.getdata();
    b1.showdata();
    return 0;

}