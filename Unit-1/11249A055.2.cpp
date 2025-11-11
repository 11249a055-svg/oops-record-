class laptop{
public:
string Brand;
string Processor;
int ram;
void display()
{
    cout<<"Brand:"<<Brand
    cout<<",Processor:"<<Processor
    cout<<",Ram:"<<Ram<<"GB"<<endl;
}
};
int main(){
    laptop l1,l2;
    l1.Brand="Dell";
    l1.Processor="Intel i5";
    l1.ram=8;
    l2.Brand="Hp";
    l2.Processor="AMPryzen 5";
    l2.ram=16;
    l1.display();
    l2.display();
    return 0;
}
