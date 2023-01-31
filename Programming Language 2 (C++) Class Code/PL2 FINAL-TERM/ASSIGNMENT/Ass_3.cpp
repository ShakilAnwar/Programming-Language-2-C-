#include<iostream>
using namespace std;
class MusicalComposition
{
    string field_for_title,composer;
    int year;
public:
    MusicalComposition(string a,string b,int c)
    {
        field_for_title=a;
        composer=b;
        year=c;
    }
    void showbase()
    {
        cout<<"Field for title :"<<field_for_title<<endl;
        cout<<"Composer :"<<composer<<endl;
        cout<<"Year :"<<year<<endl;
    }

};
class NationalAnthem : public MusicalComposition
{
    string natanna;
public:
    NationalAnthem(string a,string b,int c,string d):MusicalComposition(a,b,c)
    {
        natanna=d;
    }
     void showderived()
    {
        cout<<"National Anthem :"<<natanna<<endl;
    }
};
int main()
{
    NationalAnthem ob("s","t",2014,"shakil");
    ob.showderived();
    ob.showbase();
}
