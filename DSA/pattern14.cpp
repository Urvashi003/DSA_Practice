#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
        int j=1;
        while(j<=n){
            char ch=(i+j-2+'A');
            cout<<ch;
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }
}