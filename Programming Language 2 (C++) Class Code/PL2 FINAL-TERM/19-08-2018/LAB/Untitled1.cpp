#include<iostream>
using namespace std;
class shape
{
    int a,b;
public:
    void setlw(int l ,int w)
    {
        a=l;b=w;

    }
    void rec(int )
    {
        cout<<"Rectangle "<<endl;
        cout<<"volume"<<l*w<<endl;
    }
    void squ()
    {
        cout<<"Squre "<<endl;
        cout<<"volume"<<l*w<<endl;
    }

};
class Rectangle : public shape
{

};
class squre : public rectangle
{

};
int main()
{
    squre ob;
    ob.setlw();

    if(l==w)
    {
       ob.squ();
    }
    else
    {
        ob.rec();
    }
}


