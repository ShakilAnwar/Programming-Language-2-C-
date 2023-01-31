#include<iostream>
using namespace std;
class base
{
public:
    base()
    {
        cout<<"Calling from base constructor"<<endl;
    }
    ~base()
    {
        cout<<"Calling from base distructor"<<endl;
    }
};
class derived : public base
{
public:
    derived()
    {
        cout<<"Calling from derived constructor"<<endl;
    }
    ~derived()
    {
        cout<<"Calling from derived distructor"<<endl;
    }
};
int main()
{
    derived ob,ob1;
}
