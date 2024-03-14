#include<iostream>
using namespace std;

// int main(){
//     int arr[10]= {2,5,6};
//     cout<<"address of first memory block is"<<arr<<endl;
//     cout<<"address of first memory block is"<<&arr<<endl;
//     cout<<*arr<<endl;
//     cout<<*arr+1<<endl;
//     cout<<*(arr+1)<<endl;


//     return 0;
// }

// int main(){
//     int arr[10]={23,122,41,67};
//     int i=3;
//     cout<<i[arr]<<endl;
// }

// int main(){
//     int temp[10]={1,2};
//     cout<<sizeof(temp)<<endl;
//     cout<<sizeof(*temp)<<endl;
//     cout<<sizeof(&temp)<<endl;
//     int *ptr=&temp[0];
//     cout<<sizeof(ptr)<<endl;
//     cout<<sizeof(*ptr)<<endl;
//     cout<<sizeof(&ptr)<<endl;

//     return 0;
    
// }

int main(){
    int a[20]={1,2,3,4,5};
    cout<<a[0]<<endl;
    cout<<&a[0]<<endl;
    cout<<&a<<endl;
    cout<<a<<endl;

    int *p = &a[1];
    cout<<p<<endl;
    cout<<*p<<endl;
    cout<<&p<<endl;
    }