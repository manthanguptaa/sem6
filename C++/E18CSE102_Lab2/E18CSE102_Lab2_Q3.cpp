//Manthan Gupta - E18CSE102
#include <iostream>
#include <stdexcept>

using namespace std;

int factorial(int n){
    if(n==0 || n==1){
        return 1;
    }
    if(n<0){
        throw std::invalid_argument( "received negative value" );
    }
    return n*factorial(n-1);
}

int main()
{
    int n;
    cout<<"Enter Number: ";
    cin>>n;
    cout<<"Factorial of "<<n<<": "<<factorial(n);
    return 0;
}
