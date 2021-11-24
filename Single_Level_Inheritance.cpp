#include<iostream>
#include<conio.h>
using namespace std;

class Account
{
    float salary;
    public:
    void getsalary(){cin>>salary;}
    void putsalary(){cout<<"Salary:"<<salary;}
};

class Programmer:public Account
{
    float bouns;
    public:
    void getbouns(){cin>>bouns;}
    void putbonus(){cout<<"Bonus:"<<bouns;}
};

int main(void)
{
    system("cls");
    Programmer p1;
    p1.getsalary();
    p1.getbouns();
    p1.putsalary();
    p1.putbonus();
    return 0;
}