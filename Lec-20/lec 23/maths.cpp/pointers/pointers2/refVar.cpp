#include<iostream>
using namespace std;

// int main(){
//     int i=5;
//     //create a ref. variable
//     int &j=i;
//     cout<<i<<endl;
//     i++;
//     cout<<j<<endl;
//     j++;
//     cout<<i<<endl;

//     return 0;
// } 

void update(int n){
    n++;
}

int main(){
    int n=5;
    cout<<"before"<<n<<endl;
    update(n);
    cout<<"after"<<n<<endl;


}

