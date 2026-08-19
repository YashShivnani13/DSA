//Dynamic Array



//Creating 1-D array


// #include <iostream>
// using namespace std;

// int getSum(int *arr, int n){

//     int sum = 0;
//     for(int i=0; i<n; i++){
//         sum += arr[i];
//     }
//     return sum;
// }

// int main(){

//     int n;
//     cin>>n;

//     //variable size array
//     int *arr = new int[n];        


//     //taking input
//     for(int i=0; i<n; i++){
//         cin >> arr[i];
//     }

//     int ans = getSum(arr, n);
//     cout << ans;

//     return 0;
// }






//Creating 2-D array


#include <iostream>
using namespace std;

int main(){

    int row;
    cin>>row;

    int col;
    cin>>col;

    //Creation of dynamic 2D Array

    int **arr = new int *[row];

    for(int i=0; i<row; i++){
        arr[i] = new int[col];
    }

    //taking input
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cin >> arr[i][j];
        }
    }

    //giving output
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cout << arr[i][j] << " ";
        }
        cout<<endl;
    }


    //Releasing Memory
    for(int i=0; i<row; i++){
        delete [] arr[i];
    }
    delete []arr;


    return 0;
}