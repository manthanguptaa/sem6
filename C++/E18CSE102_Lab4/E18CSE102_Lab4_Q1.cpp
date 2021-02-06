#E18CSE102 Manthan Gupta EB03
#include <iostream>
#define INT_MIN -1000000007
#include <vector>
using namespace std;

void pairwiseSum(int arr[], int brr[], int n, int m){
    vector<int> v;
    int res=INT_MIN;
    for(int i=0;i<n;++i){
        for(int j=0;j<m;++j){
            cout<<arr[i]+brr[j]<<" ";
            v.push_back(arr[i]+brr[j]);
        }
    }
    cout<<"\n";
    for(int i=0;i<v.size()-1;++i){
        for(int j=i+1;j<v.size();++j){
            res=max(res,v[i]^v[j]);
        }
    }
    cout<<"MAXPAIR: "<<res; 
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