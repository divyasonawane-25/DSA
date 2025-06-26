#include<iostream>
using namespace std;
int main(){
  int arr[5];
  arr[0]=1;
  arr[1]=4;
  arr[2]=5;
  arr[3]=7;
  arr[4]=20;
  //accessing element
  cout<<arr[0]<<endl;

  //printing array
  for (int i = 0; i <= 4; i++)
  {
    cout<<arr[i]<<"\n";
  }
  

  //taking input for array
  int x[5];
  for(int i=0;i<=4;i++){
    cin>>arr[i];
  }
 

}