//LARGEST ROW SUM

#include <iostream>
#include <climits>
using namespace std;

int largestRowSum(int arr[][4], int row, int col){
    
    int max = INT_MIN;
    int rowIndex = -1; 

    for(int row=0; row<3; row++){
        int sum=0;
        for(int col=0; col<4; col++){
            sum += arr[row][col];
        }
        if(sum>max){
            max=sum;
            rowIndex = row;
        }
    }
    cout <<"The max sum is "<<max<< endl;
    return rowIndex;
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

    int ans  = largestRowSum(arr, 3, 4);

    cout<<"Index of maximum sum row is " << ans;

    
    return 0;
}



//Print Like A SINE Wave

// #include <bits/stdc++.h> 
// vector<int> wavePrint(vector<vector<int>> arr, int nRows, int mCols)
// {
//     vector <int> ans;
//     for(int col=0; col<mCols; col++){

//         if(col & 1){ //odd case
//             for(int row = nRows-1; row>=0; row--){
//                 ans.push_back(arr[row][col]);
//             }
//         }
//         else{ //even case
//             for(int row=0; row<nRows; row++){
//                 ans.push_back(arr[row][col]);
//             }
//         }
//     }
//     return ans;
// }





//SPIRAL MATRIX

// class Solution {
// public:
//     vector<int> spiralOrder(vector<vector<int>>& matrix) {

//         vector<int> ans;
//         int row = matrix.size();
//         int col = matrix[0].size();
//         int count = 0;
//         int total = row*col;

//         int startingRow = 0;
//         int startingCol = 0;
//         int endingRow = row-1;
//         int endingCol = col-1;

//         while(count<total){

//             for(int i = startingCol; count<total && i<=endingCol; i++){
//                 ans.push_back(matrix[startingRow][i]);
//                 count++;
//             }
//             startingRow++;

//             for(int i = startingRow ; count<total && i<=endingRow; i++){
//                 ans.push_back(matrix[i][endingCol]);
//                 count++;
//             }
//             endingCol--;

//             for(int i = endingCol; count<total && i>= startingCol; i--){
//                 ans.push_back(matrix[endingRow][i]);
//                 count++;
//             }
//             endingRow--;

//             for(int i = endingRow; count<total && i>=startingRow; i--){
//                 ans.push_back(matrix[i][startingCol]);
//                 count++;
//             }
//             startingCol++;

//         }
//         return ans;
//     }
// }; 