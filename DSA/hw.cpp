#include<iostream>
using namespace std;

int main() {
    char ch;
    cout<<"enter your data:"<<endl;
    cin>>ch;
    if(ch>='A'&& ch<='Z') 
    { 
         cout<<"Uppercase"<<ch<<endl;
        
    } 

    else if(ch>='a' && ch<='z')
    { 
        cout<<"Lowercase"<<ch<<endl;
    } 

    else if(ch>='0' && ch<='9')
    {
        cout<<"numeric"<<ch<<endl;
    } 

    else{ 
        cout<<"try again";
    }
}