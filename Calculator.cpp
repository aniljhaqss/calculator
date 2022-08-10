#include<iostream>
using namespace std;
class Calculator
{
public:
int sum(int a,int b)
{
return a+b;
}
void print()
{
cout<<"sum = "<<sum(10,11)<<endl;
cout<<"sum = "<<sum(14,13);
}
};
int main()
{
Calculator c;
c.print();
return 0;
}