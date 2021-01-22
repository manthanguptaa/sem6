//Manthan Gupta - E18CSE102
#include <iostream>
#include <cmath>

using namespace std;

bool isPrime(int n){
    if(n<=1)return false;
    for(int i=2;i<=sqrt(n);++i){
        if(n%i==0)return false;
    }
    return true;
}

int main()
{
    int n;
    cout<<"Enter Number: ";
    cin>>n;
    int count=0;
    for(int i=0;i<=n;++i){
        if(isPrime(i))count++;
    }
    cout<<"Count of prime numbers :"<<count;
    return 0;
}
