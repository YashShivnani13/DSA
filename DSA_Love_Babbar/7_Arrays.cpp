// #include <iostream>
// using namespace std;

// //function
// void printArray(int arr[], int size){
//     cout<<"printing the array: "<<endl;
//     for(int i=0; i<size; i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<"print done";
// }



// int main(){

//     //declaration
//     int arr[15];
//     //accessing values in array
//     cout<<"Value at index 14 is "<<arr[14]<<endl;


//     //declare 2nd array
//     int arr2[3] = {1,5,6};
//     //accessing
//     cout<<"Value at index 2 is "<<arr2[1]<<endl;


//     //declare 3nd array
//     int arr3[15] = {1,5,6};
//     //accessing
//     printArray(arr3, 15);

//     return 0;
// }








//MAX_MIN
// #include <iostream>
// #include <climits>
// using namespace std;

// int getMin(int arr[], int n){
//     int min = INT_MAX;

//     for(int i=0; i<n; i++){

//         if(arr[i]<min){
//             min = arr[i];
//         }
//     }
//     return min;

// }

// int getMax(int arr[], int n){
//     int maxi = INT_MIN;

//     for(int i=0; i<n; i++){

//         maxi=max(maxi,arr[i]);
//     }
//     return maxi;

// }

// int main(){
//     int size;
//     cin>>size;

//     int arr[100];

//     for(int i=0; i<size; i++){
//         cin>>arr[i];
//     }

//     cout<<"The maximum value is "<<getMax(arr, size)<<endl;
//     cout<<"The minimum value is "<<getMin(arr, size)<<endl;

//     return 0;
// }








//sum of all element in array
#include <iostream>
using namespace std;

int getSum(int arr[], int size){
    int ans=0;
    for(int i=0; i<size; i++){
        ans = ans+arr[i];
    }
    return ans;
}

int main(){
    int n;
    cout<<"Enter size of array "<<endl;
    cin>>n;

    int arr[100];

    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    
    cout<<"The sum of array is "<< getSum(arr, n);
    return 0;
}