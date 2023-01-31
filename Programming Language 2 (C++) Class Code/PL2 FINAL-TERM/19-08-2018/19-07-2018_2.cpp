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
        cout<<"X    "<<x<<endl;
    }
};
class derived : private base
{
    int y;
public:
    void setxy(int a, int b )
    {
        setx(a);
        y=b;
    }
    void showxy()
    {
        showx();
        cout<<"Y    "<<y<<endl;
    }
};
int main()
{
    derived ob;
    ob.setxy(100,200);
    ob.showxy();
}
