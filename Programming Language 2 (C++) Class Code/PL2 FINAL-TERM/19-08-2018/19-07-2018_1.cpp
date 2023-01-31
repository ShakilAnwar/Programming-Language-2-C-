#include<iostream>
using namespace std;
class base
{
    int x;
public:
    void setx(int a)
    {
        x=a;
    }
    void showx()
    {
        cout<<"X  "<< x <<endl;
    }
};
class derive : public base
{
    int y;
public:
    void sety(int b)
    {
        y=b;
    }
    void showy()
    {
        cout<<"Y  "<< y <<endl;
    }
};
int main(void)
{
    derive ob1;
    ob1.setx(1);
    ob1.sety(2);
    ob1.showx();
    ob1.showy();
}

