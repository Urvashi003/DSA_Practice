#include<iostream>
#include<vector>

using namespace std;
int main(){
    // vector<int>v;
    // cout<<"size"<<v.capacity()<<endl;

    // v.push_back(1);
    // cout<<"size"<<v.capacity()<<endl;

    // v.push_back(2);
    // cout<<"size"<<v.capacity()<<endl;

    // v.push_back(3);
    // cout<<"size"<<v.capacity()<<endl;
    // cout<<"capacity"<<v.capacity()<<endl;
    // cout<<"size"<<v.size()<<endl;

    // cout<<"front"<<v.front()<<endl;
    // cout<<"back"<<v.back()<<endl;

    // cout<<"before pop"<<endl;
    // for(int i:v){
    //     cout<<i<<" ";
    // } 
    // cout<<endl;
    // v.pop_back();

    // cout<<"after pop"<<endl;
    // for(int i:v){
    //     cout<<i<<"";
    // } 
    // cout<<endl;

    // cout<<"before clear size"<<v.size()<<endl;
    // v.clear();
    // cout<<"after clear size"<<v.size()<<endl;
 

  //how to initialize vector

  vector<int> v;
  vector <int> a(5,1);

  cout<<"print a"<<endl;
  for(int i:a){
    cout<<i<<"";
  } 
}

