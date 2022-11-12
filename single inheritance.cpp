//single inheritance 
#include <iostream>
using namespace std;
//create class
class father
{
public:
void cars()
{
cout<<"i have a car"<<endl;
}
};
//sub class
class son:public father
{
public:
void license()
{cout<<"i have a lincense"<<endl;}
};
//the main function 
int main()
{
//create an object 
son son1;
//calling member function of parent class
son1.cars();
//calling member function of sub class 
son1.license();
return 0;
}