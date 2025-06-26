#include<iostream>
using namespace std;
int main(){
int x;
cout<<"Enter the variable value"<<endl;
cin>>x;
 int count=0;
int n;
cout<<"Enter the size of array"<<endl;
cin>>n;
int arr[n];
cout<<"Enter the values:"<<endl;
for (int i = 0; i < n; i++)
{
  
  cin>>arr[i];
  
}
bool flag =false;
for(int i=0;i<n;i++){
  if(arr[i]==x){
    flag=true;
    break;
  }
  
}

if(flag==true){
    cout<<x<<" is present in the array "<<endl;
  }
  else{
    cout<<x<<" is not present in the array"<<endl;
  }
for (int i = 0; i < n; i++)
{
  if(arr[i]>x)
    count++;
}
cout<<"the count is :"<<count;
 
}