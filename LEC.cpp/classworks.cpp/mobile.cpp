#include<iostream>
using namespace std;
class mobile{
    private:
    int m=10;
    public:
    void display(){
        cout<<"value od m is :"<<m<<endl;
        cout<<"the address of what is :"<<this->m<<endl;
        cout<<"the address of m is : "<<this << endl;

    }

};
int main(){
    mobile obj1 ,obj2 ;
    obj1.display();
    obj2.display();
    return 0;
}