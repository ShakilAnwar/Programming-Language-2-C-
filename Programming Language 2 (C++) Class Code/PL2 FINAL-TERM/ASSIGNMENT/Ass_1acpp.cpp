#include<iostream>
using namespace std;
class person
{
    string name;
    int age;
public:
    void setName(string na)
    {
        name=na;
    }
    string getName()
    {
        return name;
    }
    void setAge(int ag)
    {
        age=ag;
    }
    int getAge()
    {
        return age;
    }
};
    class student : public person
    {
        float cgpa;
    public:
        void setCGPA(float c)
        {
        cgpa=c;
        }
        float getCGPA()
        {
            return cgpa;
        }
};
class teacher : public person
{
    int salary;
public:
    void setSalary(int s)
    {
        salary=s;
    }
    int getSalary()
    {
        return salary;
    }
};
int main()
{
	student s;
	s.setName("bill");
	s.setAge(20);
	s.setCGPA(3.78);

	teacher t;
	t.setName("alex");
	t.setAge(38);
	t.setSalary(2000);

	cout<< "===== Student info =====" <<endl;
	cout<< "name: " <<s.getName() <<endl;
	cout<< "age: " <<s.getAge() <<endl;
	cout<< "cgpa: " <<s.getCGPA() <<endl;

	cout<< "===== Teacher info =====" <<endl;
	cout<< "name: " <<t.getName() <<endl;
	cout<< "age: " <<t.getAge() <<endl;
	cout<< "salary: " <<t.getSalary() <<endl;

	return 0;
}

