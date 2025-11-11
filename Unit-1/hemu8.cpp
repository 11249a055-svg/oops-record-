#include<iostream>
using namespace std;
class book 
{
public:
  string title;
  string author;
  float price;
  void display(){
    cout<<"Title:"<<title
        <<",Author:"<<author
        <<",Price:Rs."<<price<<endl;
  }
    };
int main() {
    book b1,b2;
    b1.title="C++programming";
    b1.author="Bjarne Stroustrup";
    b1.price=750.50;
    b2.title="Data Structures";
    b2.author="Mark Allen Weiss";
    b2.price=600.75;
    b1.display();
    b2.display();
    return 0;
}
