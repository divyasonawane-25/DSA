#include<iostream>
using namespace std;
int main(){
  int n;
  cout<<"Enter the size of array";
  cin>>n;

  int arr[n];
\
 cout<<"Enter the "<<n<<" values"<<endl;
  for (int i = 0; i < n; i++)
  {
    
    cin>>arr[i];
  }
  
  for (int i = 0; i < n; i++)
  {
    cout<<arr[i]<<" ";
  }
}