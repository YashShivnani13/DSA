//2D array basics

// #include <iostream>
// using namespace std;

// //linear search in 2D array
// bool isPresent(int arr[][4], int target, int i, int j){
//     for(int i=0; i<3; i++){
//         for(int j=0; j<4; j++){
//             if (arr[i][j] == target){
//                 return 1;
//             }
//         }
//     }
//     return 0;
// }

// int main(){

//     //create 2D array

//     int arr[3][4];
//     // int arr[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12};
//     // int arr[3][4] = {{1,2,3,4}, {5,6,7,8}, {9,10,11,12}};



//     //taking input -> row wise input

//     for(int i=0; i<3; i++){
//         for(int j=0; j<4; j++){
//             cin>>arr[i][j];
//         }
//     }

// /*
//     //taking input -> column wise input

//     for(int i=0; i<4; i++){
//         for(int j=0; j<3; j++){
//             cin>>arr[j][i];
//         }
//     }

// */

//     // printing output

//     for(int i=0; i<3; i++){
//         for(int j=0; j<4; j++){
//             cout << arr[i][j] << " ";
//         }
//         cout<<endl;
//     }

//     //search in 2D array
//     cout<<"Enter the element to search"<<endl;
//     int target;
//     cin>>target;

//     if(isPresent(arr, target, 3, 4)){
//         cout<< "Element found" <<endl;
//     }
//     else{
//         cout<< "Element not found" <<endl;
//     }

//     return 0;
// }




//ROW WISE SUM

// #include <iostream>
// using namespace std;

// void printSum(int arr[][4], int row, int col){
//     cout<<"Printing sum " << endl;
//     for(int row=0; row<3; row++){
//         int sum=0;
//         for(int col=0; col<4; col++){
//             sum += arr[row][col];
//         }
//         cout<<sum<<endl;
//     }
//     cout << endl;
// }


// int main(){

//     int arr[3][4];

//     //taking input -> row wise input
//     cout<<"Enter elements "<<endl;
//     for(int i=0; i<3; i++){
//         for(int j=0; j<4; j++){
//             cin>>arr[i][j];
//         }
//     }

//     // printing output

//     for(int i=0; i<3; i++){
//         for(int j=0; j<4; j++){
//             cout << arr[i][j] << " ";
//         }
//         cout<<endl;
//     }

//     printSum(arr, 3, 4);
//     return 0;
// }



//COLUMN WISE SUM

#include <iostream>
using namespace std;

void printSum(int arr[][4], int row, int col){
    cout<<"Printing sum col wise " << endl;
    for(int col=0; col<4; col++){
        int sum=0;
        for(int row=0; row<3; row++){
            sum += arr[row][col];
        }
        cout<<sum<<endl;
    }
    cout << endl;
}


int main(){

    int arr[3][4];

    //taking input -> row wise input
    cout<<"Enter elements "<<endl;
    for(int i=0; i<3; i++){
        for(int j=0; j<4; j++){
            cin>>arr[i][j];
        }
    }

    // printing output

    for(int i=0; i<3; i++){
        for(int j=0; j<4; j++){
            cout << arr[i][j] << " ";
        }
        cout<<endl;
    }

    printSum(arr, 3, 4);
    return 0;
}