#include<iostream>
using namespace std;

//FACTORIAL

// int factorial(int n){
//     //base case 
//     if(n==0)
//     return 1;
//    //recursive relation

//     return (n*factorial(n-1));
// }
// int main(){
    

   
    
//         int n;
//         cin>>n;

//         int ans= factorial(n);

//         cout<<ans<<endl;
//         return 0;
//     }

        
    
//POWER OF 2

// int power(int n){
//     //base case
//     if(n==0)
//     return 1;

//     //recursive relation
//     return 2*power(n-1);
// }
// int main(){
//     int n;
//     cin>>n;

//     int ans= power(n);
//     cout<<ans<<endl;

//     return 0;
// }

//PRINT COUNTING
void print(int n){
    //base case
    if(n==0){
        return;
    }
    cout<<n<<endl;
    print(n-1);
}

int main(){
    int n;
    cin>>n;
    cout<<endl;
    print(n);

    return 0;
}