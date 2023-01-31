#include<iostream>
using namespace std;
class base
{
protected:
    int a,b;
public:
    void setab(int m,int n)
    {
        a=m;b=n;
    }
};
class derived : public base
{
    int c;
public:
    void setc(int p)
    {
        c=p;
    }
    void showabc()
    {
        cout<<a  << b   <<c<<endl;
    }
} ;
int main()
{
    derived ob;
    ob.setab(100,200);
    ob.setc(300);
    ob.showabc();
}
