#include<iostream>
using namespace std;

//character array
// int main(){
//     char name[20];
//     cout<<"enter your name"<<endl;
//     cin>>name;
//     name[2]='\0';

//     cout<<"your name is"<<endl;
//     cout<<name<<endl;
// } 



//length of string

// int getLength(char name[]){
//     int count=0;
//     for(int i=0; name[i]!='\0'; i++){
//         count++;
//     }
//     return count;
// }


// int main(){
//     char name[20];

//     cout<<"enter your name"<<endl;
//     cin>>name;

//     cout<<"your name is"<<endl;
//     cout<<name<<endl;

//     cout<<"length:"<<getLength(name)<<endl;



//     return 0;
// }
 

//reverse a string

// 

//palindrome

// bool CheckPalindrome(char name[] , int n){
//     int s=0;
//     int e=n-1;

//     while(s<=e){
//         if(name[s]!= name[e]){
//             return 0;
//         }

//         else{
//             s++;
//             e--;
//         }
//     }
//     return 1;
// }

// int main(){
//     char name[20];

//     cout<<"Enter your name"<<endl;
//     cin>>name;

//     cout<<"your name is"<<name<<endl;


//     cout<<"palindrome or not"<< CheckPalindrome(name) <<endl;
// }


//convert to lowercase

char toLowerCase(char ch){
    if(ch>='a' && ch<='z')
    return ch;

    else{
        char temp= ch-'A' +'a';
        return temp;
    }
}

int main(){
    char name[20];

    cout<<"Character is"<<toLowerCase('b')<<endl;
    cout<<"character is"<<toLowerCase('C')<<endl;

    return 0;

}