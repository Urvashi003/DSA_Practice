#include<iostream>
using namespace std;
// int main(){
//     int a,b;
//     a=10;
//     b=1;
//     if(++a)
//     cout<<b;
//     else
//     cout<<++b;
// } 

// int main(){ 
//     int a=1;
//     int b=2;
//     // if(a-->0 && ++b>2) 
//      if(a-->0 || ++b>2)
//     {

//         cout<<"stage 1- inside if";
//     }
//     else {
        // cout<<"stage2- inside ";
//     } 

    
//     cout<<a<<" "<<b<<endl;
    

// }

// int main(){ 
//     int num=3;
//     cout<<(25*(++num));

// }

int main(){
    int a=1;
    int b=a++;
    int c=++a;
    cout<<b;
    cout<<c;
}