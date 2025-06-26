#include<iostream>
using namespace std;
int main(){
  //initializing the array in one line
  int arr[]={7,4,10,0,20};
   
  //for getting size of arr that is how many elemnts are there in the arr:
  int n=sizeof(arr)/sizeof(arr[0]);
  cout<<n<<endl;

  for(int i=0;i<n;i++){
  cout<<arr[i]<<" ";
  }
}