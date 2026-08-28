// isSorted using recursion


// #include <iostream>
// using namespace std;

// bool isSorted(int *arr, int size){

//     //base case
//     if(size==0 || size==1)
//         return true;
    

//     //recursive relation
//     if(arr[0]>arr[1])
//         return false;
//     else{
//         bool remainingPart = isSorted(arr+1, size-1);
//         return remainingPart;
//     } 
// }

// int main(){
//     int arr[5] = {1,4,5,9,8};
//     int size = 5;

//     bool ans = isSorted(arr, size);

//     if(ans){
//         cout<<"The array is Sorted"<<endl;
//     }
//     else{
//         cout<<"The array is not sorted"<<endl;
//     }
//     return 0;
// }







//SUM of array using Recursion


// #include <iostream>
// using namespace std;

// int getSum(int *arr, int size){

//     //base case
//     if(size == 0){
//         return 0;
//     }
//     if(size == 1){
//         return arr[0];
//     }

//     //recursive relation
//     int remainingPart = getSum(arr+1, size-1);
//     int sum = arr[0] + remainingPart;
//     return sum;
// }

// int main(){
//     int arr[5] = {4,4,5,9,8};
//     int size = 5;

//     int sum = getSum(arr, size);

//     cout<<"Sum is "<<sum<<endl;
    
//     return 0;
// }








//Linear Search with Recursion


// #include <iostream>
// using namespace std;

// bool Ls(int *arr, int size, int key){

//     //base case
//     if(size==0){
//         return false;
//     }
//     if(arr[0]==key){
//         return true;
//     }

//     //recursive relation
//     bool remainingPart = Ls(arr+1, size-1, key);
//     return remainingPart;
// }


// int main(){

//     int arr[5] = {5,67,3,5,2};
//     int size = 5;
//     int key = 1 ;

//     bool search = Ls(arr,size,key);

//     if(search){
//         cout << "Present";
//     }
//     else{
//         cout<<"Absent";
//     }

//     return 0;
// }



//Binary Search with Recursion


#include <iostream>
using namespace std;