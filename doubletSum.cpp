#include<iostream>
#include<vector>
using namespace std;

int main(){
  int x=10;
  vector<int> v(5);
  vector<int> v1(2);
  cout<<"enter the values of array"<<endl;
  for(int i=0;i<v.size();i++){
    cin>>v[i];
  }

  for(int i=0;i<5;i++){

    for(int j=i+1;j<5j++){
      if(v[i]+v[j] == x ){
         v1[0]=i;
         v1[1]=j;
         cout<<v1[0]<<" "<<v1[1];
      }
    }
    break;
  }

}
