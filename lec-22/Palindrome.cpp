#include<iostream>
using namespace std;

bool CheckPalindrome(char a[], int n){
    int s= 0;
    int e =n-1;

    while(s<=e){
        if(a[s]!= a[e]){
            return 0;
        }
        else {
            s++;
            e--;
        }
    }

    return 1;
} 

int getLength(char name[]){
    int count=0;
    for(int i=0; name[i]!= '\0'; i++){
        count++;
    }
    return count;
}



int main(){

    char name[20];

    cout<<"your name is"<<endl;
    cin>>name;

     int len = getLength(name);
    cout<<"length:"<<len<< endl;
    
    cout<<"Palindrome or not"<< CheckPalindrome(name,len)<<endl;
}