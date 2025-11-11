#include<iostream>
using namespace std;
class Demo{
    int x;
    public:
    Demo()
    {
        x=0;
        cout<<"Default constructor called,x="<<endl;
    }
    Demo(int a)
    {
        x=a;
        cout<<"Parameterized constructor called,x="<<endl;
    }
    Demo(Demo &d)
    {
        x=d.x;
       cout<<"copy constructor called,x="<<endl;
    }
    };
int main()
{
    Demo d1;
    Demo d2(10);
    Demo d3(d2);
    return 0;
}