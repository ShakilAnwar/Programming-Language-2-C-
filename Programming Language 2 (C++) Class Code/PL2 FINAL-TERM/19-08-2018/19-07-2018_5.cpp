#include<iostream>
using namespace std;
class base
{
public:
    void shakil()
    {
        cout<<"Shakil Anwar"<<endl;
    }
};
class derived : public base
{
public:
    void shakil()
    {
        cout<<"Shakil Anwar Najmol"<<endl;
    }
};
int main()
{
    derived ob;
    ob.shakil();
}
