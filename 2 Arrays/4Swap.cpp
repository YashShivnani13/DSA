#include <iostream>
using namespace std;

void alternate(int arr[], int n ){

     int i= 0;
     while(i+1 < n){
        swap(arr[i], arr[i+1]);
        i+=2;
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
    

    alternate(arr,  6);
    

    cout <<"alternate array is"<<  endl;

    printArray(arr, 6);
       
    return 0;

}