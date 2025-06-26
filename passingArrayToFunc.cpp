#include<iostream>
using namespace std;
void change(int x){
  x=8;
}
void change(int x[]){
  x[0]=8;
}

int main(){
  int x=5;
 cout<<x<<endl;
change(x);
 cout<<x<<endl;
 //no change whhy??
 //becuz int x is local for that function i.e. it is passed by value and not reference
 int arr[]={1,4,5,6,8};
cout<<arr[0]<<endl;
change(arr);
cout<<arr[0]<<endl;
 //changed why??
 //becuz array is not local for the function i.e. it is passed by reference
 //note that : no new array of name x is created here..it is the same arr
 
 
}
