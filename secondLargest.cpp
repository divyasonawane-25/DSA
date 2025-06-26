#include<iostream>
using namespace std;
int main(){
 
  int arr[]={1,5,2,89,93,4};
   int n=sizeof(arr)/sizeof(arr[0]);
  //int mx=arr[0]; for this need to take i = 1
  int mx=INT16_MIN;
  int smx=INT16_MIN;

  for(int i =0;i<n;i++){
    if(mx<arr[i]){
      mx=arr[i];
      //or mx=max(mx,arr[i]);
    }
  }

  for (int i = 0; i < n; i++)
  {
    if(smx<arr[i] && arr[i]!=mx){
      smx=arr[i]; 
    }
  }
  

  cout<<mx<<" "<<smx;

}