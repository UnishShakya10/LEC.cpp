
#include <iostream>
#include “person.h”
using namespace std;
void person::getdata(){
cout<<”Enter name: “;
cin>> name;
cout<<”Enter age: “;
cin>>age;
}
void Person::display() {
cout<<”\nName:”<<name;
cout<<”\nAge:”<<age;
}