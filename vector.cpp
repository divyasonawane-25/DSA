//prblm in array: fixed size once declared cannot chnage the size
//vector is dynamic array 
#include<iostream>
#include<vector>
using namespace std;
int main(){
  int n=5;
  // cout<<"Enter array size"<<endl;
  // cin>>n;
  // int arr[n];
  vector<int> arr(n,7);
  cout<<"Enter the values of array"<<endl;
  // for(int i = 0; i < n; i++)
  // {
  //  cin>>arr[i];
  // }
  
  for(int i = 0; i < n; i++)
  {
   cout<<arr[i]<<" ";
  }
  
 cout<<endl;
  cout<<arr.size()<<endl;
  arr.push_back(10);//increased size of vector i.e. 10 will be added to the vector
  //caoacity will be doubled i.e. array size will be copied again
  cout<<arr.size();

  arr.pop_back();
  cout<<arr.size();

}