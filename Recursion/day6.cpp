#include<iostream>
using namespace std;

void quickSort(int arr[] , int s , int e){
    //base case
    if(s>=e)
    return;

    //partition karenge
    int p = partition(arr,s,e);

    //left part sort karo
    quickSort
}

int main(){

    int arr[5]= {2,1,4,6,9};
    int n=5;

    quickSort(arr , 0 , n-1);

    for(int i=0 ; i<n; i++){
        cout<< arr[i] << " ";
    }cout<<endl;

    return 0;
}