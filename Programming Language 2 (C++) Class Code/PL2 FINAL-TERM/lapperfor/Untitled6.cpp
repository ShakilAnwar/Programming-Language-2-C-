#include<iostream>
using namespace std;
class ship
{
private:
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
    void showpc()
    {
        cout<<"Passengeer :"<<passenger<<endl;
        cout<<"Cargo :"<<cargo<<"kg"<<endl;
    }

};
class cruise: protected ship
{
    string engine;
    double range;
public:
    cruise(int a,double b,string c,double d):ship(a,b)
    {
        engine=c;
        range=d;
    }
    void shower()
    {
        cout<<"Engine :"<<engine<<endl;
        cout<<"Range :"<<range<<"km"<<endl;
    }
};
int main()
{
    cruise ob(100,4000,"Propeller",12000);
    ob.showpc();
    ob.shower();
}


