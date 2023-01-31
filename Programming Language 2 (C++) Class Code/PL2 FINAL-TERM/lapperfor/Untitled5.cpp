#include<iostream>
using namespace std;
class ship
{
protected:
    int passenger;
    double cargo;
public:
    ship(int a,int b)
    {
     passenger=0;
     cargo=0;
     passenger=a;
     cargo=b;

    }


};
class cruise: protected ship
{
    string engine;
    double range;
public:
    cruise(int a,double b,string c,double d):ship(a,b)
    {
        passenger=a;
        cargo=b;
        engine=c;
        range=d;
    }
    void shower()
    {
        cout<<"Engine :"<<engine<<endl;
        cout<<"Range :"<<range<<"km"<<endl;
    }
    void showpc()
    {
        cout<<"Passengeer :"<<passenger<<endl;
        cout<<"Cargo :"<<cargo<<"kg"<<endl;
    }
};
int main()
{
    cruise ob(100,4000,"Propeller",12000);
    ob.showpc();
    ob.shower();
}


