#E18CSE102 Manthan Gupta EB03
#include <iostream>

using namespace std;

void pairwiseSum(int arr[], int brr[], int n, int m){
    for(int i=0;i<n;++i){
        for(int j=0;j<m;++j){
            cout<<arr[i]+brr[j]<<" ";
        }
    }
    cout<<"\n";
}

int main()
{
   int n, m;
   cin>>n>>m;
   int arr[n];
   int brr[m];
   for(int i=0;i<n;++i)cin>>arr[i];
   for(int i=0;i<m;++i)cin>>brr[i];
   pairwiseSum(arr,brr,n,m);
   return 0;
}