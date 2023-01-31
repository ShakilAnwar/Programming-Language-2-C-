   #include<iostream>
   using namespace std;
   class base
   {
   public:
        base()
        {
            cout<<"calling from base con"<<endl;
        }
        ~base()
        {
            cout<<"Calling from base dis"<<endl;
        }
   };
   class derived : public base
   {
       int x;
   public:
    derived(int a)
    {
        cout<<"Calling from derived con"<<endl;
        x=a;
    }
    ~derived()
    {
        cout<<"Calling from derived dis"<<endl;
    }
    void show()
    {
        cout<<x<<endl;
    }
   };
   int main()
   {
       derived ob(100);
       ob.show();
   }
