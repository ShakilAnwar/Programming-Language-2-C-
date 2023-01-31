 #include<iostream>
   using namespace std;
   class base
   {
       int x;
   public:
        base(int a)
        {
            cout<<"calling from base con"<<endl;
            x=a;
        }
        ~base()
        {
            cout<<"Calling from base dis"<<endl;
        }
        void showx()
        {
            cout<<"X"<<x<<endl;
        }
   };
   class derived : public base
   {
       int y;
   public:
    derived(int a):base(a)
    {
        cout<<"Calling from derived con"<<endl;
        y=a;
    }
    ~derived()
    {
        cout<<"Calling from derived dis"<<endl;
    }
    void showy()
    {
        cout<<"Y"<<y<<endl;
    }
   };
   int main()
   {
       derived ob(100);
       ob.showx();
       ob.showy();
   }

