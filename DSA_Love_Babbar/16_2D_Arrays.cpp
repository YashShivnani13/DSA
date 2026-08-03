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