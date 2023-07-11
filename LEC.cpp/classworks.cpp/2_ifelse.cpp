#include<iostream>
using namespace std;
int main (){
    int num;
    cout<< "enter a number:";
    cin>>num;
    if (num!=0){
        if (num>0){
            cout<<"the number ius positive:"<< endl;}
        
        else {
            cout<<"the number is negative:"<<endl;

        }
    }
    else {
        cout<<"the number is 0 and it is neither positive nor negative. "<<endl;    }

    return ;

}