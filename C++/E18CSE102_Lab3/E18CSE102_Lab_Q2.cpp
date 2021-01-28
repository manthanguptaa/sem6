/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

//Manthan Gupta E18CSE102 EB03
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
    int arr[7][2]={{1,4},{3,2},{5,6},{7,8},{9,10},{13,12},{11,14}};
    cout<<"w<y and x>z \n";
    for(int i=0;i<6;++i){
        for(int j=i+1;j<7;++j){
            if(arr[i][0]<arr[j][0] && arr[i][1]>arr[j][1])
                cout<<"("<<arr[i][0]<<","<<arr[i][1]<<") ,"<<"("<<arr[j][0]<<","<<arr[j][1]<<") \n";
        }
    }
    cout<<"w>y and x<z \n";
    for(int i=0;i<6;++i){
        for(int j=i+1;j<7;++j){
            if(arr[i][0]>arr[j][0] && arr[i][1]<arr[j][1])
                cout<<"("<<arr[i][0]<<","<<arr[i][1]<<") ,"<<"("<<arr[j][0]<<","<<arr[j][1]<<") \n";
        }
    }
    return 0;
}
