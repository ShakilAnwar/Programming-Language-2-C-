#include<iostream>
using namespace std;
class person
{
    string name;
    int age;
public:
    void setname(string na)
    {
        name=na;
    }
    string getname()
    {
        return name;
    }
    void setage(int ag)
    {
        age=ag;
    }
    int getage()
    {
        return age;
    }
};
int main()
{
    person shakil;
    shakil.setname("ANWAR,NAJMOL");
    shakil.setage(22);
    cout<<"NAME :"<<shakil.getname()<<endl;
    cout<<"AGE :"<<shakil.getage()<<endl;
    return 0;
}

