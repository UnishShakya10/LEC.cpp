#include<iostream>
using namespace std;
class automobile(){
    private:
        int platenumber;
    public:
    int getnumber(int a ){
        platenumber=a;
        return platenumber;

    }
};
int main (){
    automobile bike;
    cout<<"the value of my bike plate number :"<<bike.getnumber(6969);

}