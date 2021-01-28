/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <cmath>
using namespace std;
double area(int r){
    return (double)r*r*3.14;
}

double radius(double a){
    return sqrt(a/3.14);
}

int main()
{
    int r1,r2;
    cout<<"Ënter the radius of circle C1 and C2:";
    cin>>r1>>r2;
    double pi=3.14;
    double a1=area(r1);
    double a2=area(r2);
    double a=(a1+a2);
    double r=radius(a);
    cout<<"Area of circle C1 "<<a1<<" Area of circle C2: "<<a2<<"\n";
    cout<<"Radius of circle with area of C1+C2:"<<r;
    return 0;
}
