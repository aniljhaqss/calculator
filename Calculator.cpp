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
cout<<sum(10,11);
}
};
int main()
{
Calculator c;
c.print();
return 0;
}