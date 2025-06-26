#include<iostream>
#include<vector>
using namespace std;

int main(){
  vector<int> v(5);
  cout<<"enter the values of array"<<endl;
  
  for(int i=0;i<v.size();i++){
    cin>>v[i];
  }

  for(int i=0;i<v.size();i++){

    for(int j=i+1;j>v.size();j++){
      if(i==j){
        cout<<v[i]<<" and "<<v[j]<<" are duplicates"<<endl;
        
      }
    }
  }

}