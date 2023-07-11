#include<iostream>
using namespace std;
int main(){
    int o,t,ec,m,e,total;
    float percent, avg;
    cout<< "please fill the marks of the following subjects :";
    cout<<"enter the marks of object oriented programing :"<<endl;
    cin>>o;
    cout<<"enter the marks of theory od computation :"<<endl;
    cin>>t;
    cout<<"enter the marks of electronic circuit :"<<endl;

    cin>>ec;
    cout<<"enter the marks of maths ;"<<endl;
    cin>>m;
    cout<<"enter tghe  marks of electromagnetics :"<<endl;
    cin>>e;
    total=o+t+ec+m+e;
    cout <<"the total marlks  of five subjects is : "<<total<<endl;
    avg=(total/5.0);
    percent=(total*80)/400.0;
    cout<<"the average is ="<<avg;
    cout<<"the percentage is ="<<percent;
    return 0;
    

}