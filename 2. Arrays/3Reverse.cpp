//Reverse an array

#include <iostream>
using namespace std;

void reverse(int arr[], int n ){

    int start = 0;
    int end = n-1;

    while(start<=end){
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

void printArray(int arr[], int n){
    for (int i=0 ; i < n ; i++){
        cout << arr[i] << endl;
    }
    cout << endl;  
}

int main(){
    
    int arr[6] = {1,2,3,4,5,6};
    int brr[5] = {1,2,3,4,5};

    reverse(arr,  6);
    reverse(brr,5);

    cout <<"reversed arrays are"<<  endl;

    printArray(arr, 6);
    printArray(brr, 5);    
    return 0;

}



// int arr[100];
//     int brr[100];
//     cout<< "enter length of 1st array: " <<endl;
//     int n;
//     cin>>n;
//     cout << "enter array 1: " << endl;
//     for (int i=0 ; i<n ; i++){
//         cin >> arr[i] ; 

//     }
//     cout<< "enter length of 2nd array: " <<endl;
//     int q;
//     cin>> q;
//     cout << "enter array 2 : " << endl;
//     for (int i=0 ; i<q ; i++){
//         cin >> brr[i] ; 

//     }



    