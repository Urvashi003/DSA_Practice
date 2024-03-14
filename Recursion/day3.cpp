#include<iostream>
using namespace std;

// bool isSorted(int arr[] , int size){
//     //base case
//     if(size==0 || size==1){
//         return true;
//     }
//     if(arr[0]>arr[1])
//         return false;
//     else{
//         bool remainingPart= isSorted(arr+1 , size-1);
//         return remainingPart;
//     }
// }

// int main(){
//     int arr[6] = {2,4,5,7,8,6};
//     int size = 5;

//     bool ans = isSorted(arr,size);
//     if(ans){
//         cout<<"Array is sorted"<<endl;
        
//     }
//     else{
//         cout<<"array is not sorted"<<endl;
//     }
//     return 0;

// }

//SUM

// int getSum( int *arr, int size){
//     //base case
//     if(size==0){
//         return 0;
//     }
//     if(size==1){
//         return arr[0];
//     }

//     int remainingPart = getSum(arr+1 , size-1);
//     int sum = arr[0] + remainingPart;
//     return sum;
// }

// int main(){
//     int arr[5]= {2,3,4,5,6};
//     int size =5;
//     int sum = getSum(arr, size);
//     cout<<"sum is"<<sum<<endl;
    
//     return 0;
// }

//LINEAR SEARCH

// bool linearSearch( int arr[] , int size , int key){
//     //base case
//     if(size==0)
//     return false;

//     if(arr[0]==key){
//         return true;
//     }
//     else{
//         bool remainingPart = linearSearch(arr+1, size-1 , key);
//         return remainingPart;
//     }
        
    
// }

// int main(){
//     int arr[5]={2,3,4,5,6};
//     int size=5;
//     int key= 9;

//     bool ans = linearSearch(arr,size,key);
    
//     if(ans){
//         cout<< " present "<<endl;
    
//     }
//     else{
//         cout<<"absent"<<endl;
//     }

//     return 0;
//     }

//BINARY SEARCH
bool binarySearch(int *arr , int s, int e , int key){
    //base case
    if(s>e)
    return -1;

    int mid = s+(e-s)/2;
    //element found
    if(arr[mid]==key)
    return true;

    if(arr[mid]<key){
        return binarySearch(arr, mid+1,e,key);
     }

     else{
        return binarySearch(arr,s,mid-1,key);
     }

    
}

int main(){
    int arr[6]={2,4,6,10,14,16};
    int size = 6;
    int key= 4;
    cout<<"present or not"<< binarySearch(arr,0,5,key)<<endl;

    return 0;
}