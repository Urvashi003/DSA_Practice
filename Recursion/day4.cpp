#include<iostream>
using namespace std;

//REVERSE STRING
// void reverse(string &str , int i , int j){
//     cout<<"call recieved for string"<< str <<endl;

//     //base case
//     if(i>j)
//     return;

//     swap(str[i] , str[j]);
//     i++;
//     j--;

//     //recursive call
//     reverse(str, i , j);
// }

// int main(){
//     string name = "abcde";
//     cout<<endl;
//     reverse(name,0,name.length()-1);
//     cout<<endl;
//     cout<<name<<endl;

//     return 0;
// }

//check palindrome
// bool checkPalindrome (string str , int i , int j){
//     //base case

//     if(i>j)
//     return true;

//     if(str[i]!= str[j])
//     return false;
    
//     else{
//         //RECURSIVE CALL
//         return checkPalindrome( str , i+1 , j-1);
//     }

// }

// int main(){
//     string name = "abcba";
//     cout<<endl;

//     bool isPalindrome = checkPalindrome(name, 0 , name.length()-1);

//     if(isPalindrome){
//         cout<<" It is a palindrome" << endl;

//     }

//     else{
//         cout<<"Its not a palindrome"<< endl;
//     }

//     return 0; 
// }

//POWER
// int power(int a, int b) {
//     //base case
//     if( b == 0 )
//         return 1;

//     if(b == 1)
//         return a;

//     //RECURSIVE CALL
//     int ans = power(a, b/2);

//     //if b is even
//     if(b%2 == 0) {
//         return ans * ans;
//     }
//     else {
//         //if b is odd
//         return a * ans * ans;
//     }
// }

// int main() {

//     int a,b;
//     cin >> a >> b;
//     cout << endl;
//     int ans = power(a,b);

//     cout << "Answer is " << ans << endl;

//     return 0;
// }

//BUBBLE SORT

void sortArray( int *arr , int n){
    //base-case Already sorted
    if(n==0||n==1){
        return ;

    }
    // 1 case solve karlo  - largest element ko end mein rakh do
    for(int i=0 ;  i<n-1 ; i++){
        if(arr[i]> arr[i+1]){
            swap(arr[i] , arr[i+1]);
        }
    }
    //recursive call
    sortArray(arr , n-1);
}

int main(){
    int arr[5] = {2,5,3,4,1};

    sortArray(arr , 5);
    for( int i=0 ; i<5 ; i++){
        cout<< arr[i] <<" ";

    } 

    return 0;
}