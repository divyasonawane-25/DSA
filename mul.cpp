#include<iostream>
using namespace std;
int main(){
int arr[]={1,4,2,3,50};
int n=sizeof(arr)/sizeof(arr[0]);
int mul=1;
for(int i=0;i<n;i++)
{
mul*=arr[i];
}
cout<<mul;
}