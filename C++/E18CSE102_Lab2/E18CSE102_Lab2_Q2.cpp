//Manthan Gupta - E18CSE102
#include <iostream>

using namespace std;

int main()
{
    double basic;
    double da,hra;
    cout<<"Enter Basic Salary: ";
    cin>>basic;
    cout<<"Enter DA'%' :";
    cin>>da;
    cout<<"Enter HRA'%':";
    cin>>hra;
    double salary=basic + (da/100)*basic + (hra/100)*basic;
    cout<<"Gross Salary: "<<salary<<"\n";
    return 0;
}
