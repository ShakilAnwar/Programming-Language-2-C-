#include<iostream>
using namespace std;
class cdr
{
public:
    int r,l=10;
    void setvalue(int r1,int r2)
{
    r=(r1*l)/(r1+r2);
}
void printvalue()
{
    cout<<r<<endl;
}
};
class vdr
{
    int t=10,v;
public:
    void setvalue(int v1,int v2)
{
v=(v1*t)/(v1+v2);
}

void printvalue()
{
    cout<<v<<endl;
}
};
class ohm:public cdr,public vdr
{
public:
    void input()
    {
        cdr::setvalue(12,13);
        vdr::setvalue(11,13);
    }
    void output()
    {
        cdr::printvalue();
        vdr::printvalue();

    }
};
int main()
{
    ohm obj;
    obj.input();
    obj.output();
    return 0;
}
