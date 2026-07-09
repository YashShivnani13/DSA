//Linear Search

// #include <iostream>
// using namespace std;

// bool Ls(int arr[], int size, int key){
//     for(int i=0; i<size; i++){
//         if(arr[i] == key){
//             cout<<i<<" ";
//             return 1;
//         }
//     }
//     return 0;
// }

// int main(){

//     int arr[10] = {8, 6, 87, 45, 62, 78, 02, 34, 96, 7};
//     int n;
//     cout<<"Enter value of key ";
//     cin>>n;

//     int found = Ls(arr, 10, n);

//     if (found){
//         cout<<"Key is present";
//     }else{
//         cout<<"Key is absent";
//     }
//     return 0;
// }




//Reverse Array

// #include <iostream>
// using namespace std;

// void reverse(int arr[], int n){
//     int start = 0;
//     int end = n-1;

//     while(start<=end){
//         swap(arr[start], arr[end]);
//         start++;
//         end--;
//     }
// }

// void printArray(int arr[], int n){
//     for(int i=0; i<n; i++ ){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
// }


// int main(){

//     int arr[6] = {1,2,3,4,5,6};
//     int brr[5] = {5,4,3,2,1};

//     reverse(arr,6);
//     reverse(brr, 5);

//     printArray(arr, 6);
//     printArray(brr, 5);
    
// }





//Swap alternate
#include <iostream>
using namespace std;

void swapA(int arr[], int size){

    for(int i=0; i<size; i+=2){
        if(i+1<size){
            swap(arr[i],arr[i+1]);
        }

    }
    return;
}

int printArray(int arr[], int size){
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int even[6]={1,2,3,4,5,6};
    int odd[5]={1,2,3,4,5};

    swapA(even, 6);
    printArray(even, 6);


    swapA(odd, 5);
    printArray(odd,5);
    
    return 0;
}
