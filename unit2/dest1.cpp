#include<iostream>
using namespace std;
class demo{
    int x;
    public:
    demo(int a)
    {
        x=a;
        cout<<"constructor called,x="<< x <<endl;
    }
    demo()
    {
        cout<<"destructor called for object with x="<<endl;
    }
};
int main() {
    demo d1(5),d2(10),d3(15);
    cout<<"object are going out of scop:"<<endl;
    return 0;
}