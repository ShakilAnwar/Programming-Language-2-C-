#include<iostream>
using namespace std;
class base
{
public:
    void ShowMsg()
    {
        cout<<"Func from base"<<endl;
    }
};
class derive :public base
{
public:
        void ShowMsg()
    {
        cout<<"Func from derive"<<endl;
    }
};
int main()
{
    derive ob1;
    ob1.ShowMsg();
}
