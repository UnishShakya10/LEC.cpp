#include<iostream>
using namespace std;
class employee{
    private:
        char name[25];
        float salary;
    public:
    void getdata()
    {
        cout<<"enter nmaae";
        cin>>name;
        cout<<"enter salary";
        cin>>salary;

    }
    void showdata()
    {
        cout<<"name"<<name <<endl;
        cout<<"sakary"<<salary<<endl;

    }
};
int main()
{
    employee *eptr ;
    employee e;
    eptr =&e;
    eptr ->getdata();
    cout<<"jpt";
    eptr ->showdata();
    return 0;
}