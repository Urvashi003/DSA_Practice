#include<iostream>
using namespace std;

int findUnique(int *arr, int size)
{
    int ans=0;

    for(int i=0; i<size ; i++){
        ans=ans^arr[i];
       
    }
    return ans;
} 


 int main(){
    
    int arr[9]={1,1,2,2,3,3,4,4,9};
     int ans= findUnique(arr,9);
      cout<<ans;
    return 0;
 }