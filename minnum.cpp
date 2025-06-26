#include<iostream>
using namespace std;
int main(){
 
  int arr[]={1,5,2,89,93,4};
   int n=sizeof(arr)/sizeof(arr[0]);
  //int mx=arr[0];
  int mn=INT16_MAX;

  for(int i =0;i<n;i++){
    if(mn>arr[i]){
      mn=arr[i];
      //or mn=min(mn,arr[i]);
    }
  }
  cout<<mn;
}