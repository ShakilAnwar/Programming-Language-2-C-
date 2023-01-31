#include <iostream>

using namespace std;

class base
{
public:

    void a()
    {
        cout<<"Shakil Anwar"<<endl;
    }
};
class derive: public base
{

} ;
class shakil: public derive
{

} ;
class aziz: public shakil
{

} ;
class nano: public aziz
{

} ;
int main()
{
    nano

     ob1;
    ob1.a();
    //base  ob2;
    //cout<<ob1.a<<endl;
    //cout<<ob2.a<<endl;
}
