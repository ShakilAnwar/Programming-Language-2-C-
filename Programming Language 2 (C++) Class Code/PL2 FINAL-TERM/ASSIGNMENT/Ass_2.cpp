#include<iostream>
using namespace std;
class buliding
{
    double room,area;
    public:
    void setroom(double r)
    {
        room=r;
    }
    double getroom()
    {
        cout<<"The number of room :"<<room<<endl;
    }
    void setarea(double a)
    {
        area=a;
    }
    double getarea()
    {
        cout<<"The area is :"<<area<<endl;
    }
};
class house : public buliding
{
    double bedroom;
public:
    void setbedroom(double b)
    {
        bedroom=b;
    }
    double getbedroom()
    {
        cout<<"The number of bedrooms :"<<bedroom<<endl;
    }

};
class office : public buliding
{
    double fire_exits,telephone;
public:
    void setfire_exits(double se)
    {
     fire_exits=se;
    }
    double getfire_exits()
    {
        cout<<"The number of fire exits :"<<fire_exits<<endl;
    }
    void setelephone(double tp)
    {
        telephone=tp;
    }
    double gettelephone()
    {
        cout<<"The number of telephone : "<<telephone<<endl;
    }
};
int main()
{
    house shakil;
    office anwar;
    shakil.setroom(5);
    shakil.setarea(1000);
    shakil.setbedroom(4);
    anwar.setroom(7);
    anwar.setarea(1500);
    anwar.setfire_exits(9);
    anwar.setelephone(20);
    cout<< "===== House info =====" <<endl;
	cout<< "Room: " << shakil.getroom() <<endl;
	cout<< "Area: " << shakil.getarea() <<endl;
	cout<< "Bedroom: " << shakil.getbedroom() <<endl;

	cout<< "===== Office info =====" <<endl;
	cout<< "Room: " <<anwar.getroom() <<endl;
	cout<< "Area: " <<anwar.getarea() <<endl;
	cout<< "Fire Exits : " <<anwar.getfire_exits() <<endl;
	cout<<"Telephone :"<<anwar.gettelephone()<<endl;

	return 0;

}
