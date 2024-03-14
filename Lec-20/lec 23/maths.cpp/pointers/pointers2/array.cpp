#include<iostream>
using namespace std;


// int main(){
//     char ch = 'q';
//     cout<<sizeof(ch)<<endl;

//     char *ch = &ch;
//     cout<<sizeof(ch)<<endl;

//     return 0;
// } 

// int getSum(int *arr, int n) {

//     int sum = 0;
//     for(int i=0; i<n; i++) {
//         sum += arr[i];
//     } 
//     return sum;
// }

// int main() {

//     int n;
//     cin >> n;
    
//     //variable size array
//     int* arr = new int[n];

//     //takign inputn in aray
//     for(int i=0; i<n; i++) {
//         cin >> arr[i];
//     }

//     int ans = getSum(arr, n);

//     cout << "answer is "<< ans << endl;

// //     //case 1
// //     while(true) {
// //         int i = 5;
// //     }
    
// // //case 2


// //     while(true) {
// //         int* ptr = new int;
// //     }
//   delete [] arr;
//     return 0;
// }

//   int main(){

//     int n;
//     cin>>n;

//     int **arr = new int*[n];

//     for(int i=0; i<n;i++){
//         arr[i]= new int[n];
//     }
//     //creation done

//     //taking input
//     for(int i=0;i<n;i++){
//         for(int j=0; j<n;j++){
//             cin>>arr[i][j];
//         }
//     }
//     //taking output
//     cout<<endl;
//     for(int i=0; i<n; i++){
//         for(int j=0;j<n;j++){
//             cout<<arr[i][j]<<" ";
//         } 
//         cout<<endl;
//     }
//     return 0;
//   }

//m*n row and col

int main(){
    int row;
    cin>>row;

    int col;
    cin>>col;

    //creating a 2D array
    int **arr = new int*[row];
    for(int i=0; i<row; i++){
        arr[i]= new int [col];
    } 

    // //taking input
    // for(int i=0; i<row ; i++){
    //     for(int j=0; j<col; j++){
    //         cin>>arr[i][j];
    //     }
    // } 

    // for(int i=0; i<row; i++){
    //     for(int j=0; j<col; j++){
    //         cout<<arr[i][j]<<" ";

    //     }
    //     cout<<endl;
    // } 

    //releasing memory
    for(int i=0; i<row; i++){
        delete [] arr[i];
    }
    return 0;
}