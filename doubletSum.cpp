#include<iostream>
#include<vector>
using namespace std;

int main(){
  int x=10;
  vector<int> v(5);
  cout<<"enter the values of array"<<endl;
  
  for(int i=0;i<v.size();i++){
    cin>>v[i];
  }

  for(int i=0;i<v.size();i++){

    for(int j=i+1;j>v.size();j++){
      if(i+j==x ){
         v[0]=i;
         v[1]=j;
         cout<<""
      }
    }
    break;
  }

}