#include<iostream>
using namespace std;
class vechicle
{
public:
    int now=20;
    double range=14,speedlimit=110,currentspeed=90;
    void showinformation()
    {

    cout<<"Number of Wheels :"<<now<<endl;
    cout<<"Range :"<<range<<endl;
    cout<<"Speed limit :"<<speedlimit<<endl;
    }
    void showcurrentspeed()
    {
        cout<<"Current Speed  :"<<currentspeed<<endl;
    }
};
class car:public vechicle
{
public:
    int cc=1200,nop=4;
    void showpassengerlimit()
    {
        cout<<"Number of maximun passenger :5"<<endl;
    }

};
class truck:public vechicle
{
public:
    int hoursepower,loadlimit;
    void loadshalimit()
    {
     cout<<"Maximun amount of load :20ton"<<endl;
    }
};
int main()
{
    truck s;
    car s1;
    s.showinformation();
    s1.showpassengerlimit();
    s.loadshalimit();
}
