#include<iostream>
using namespace std;
int main(){
int arr[]={1,4,2,3,50};
int n=sizeof(arr)/sizeof(arr[0]);
int sum=0;
for(int i=0;i<n;i++)
{
sum+=arr[i];
}
cout<<sum<<" ";
}