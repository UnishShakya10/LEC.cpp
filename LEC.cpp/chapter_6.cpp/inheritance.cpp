
#include<iostream>
using namespace std;
class Account{
    public:
    float salary = 60000;
};   //base class
 class programer: public Account{
    public:
    float bonus = 7000;
 };  //derived class


 int main(){
    programer p1;
    Account a1;
    cout<<"salary:"<<p1.salary<<endl;
    cout<<"salary:"<<a1.salary<<end1;
    cout<<"bonus:"<<p1.bonus<<endl;
    return 0;
 }