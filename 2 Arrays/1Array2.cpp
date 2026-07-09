// Pass by reference   // scope in array

#include <iostream>
using namespace std;

void changeArr(int arr[], int size){
    cout<<"in function \n";
    for (int i=0; i<size; i++){
        arr[i] = 2*arr[i];       // updation
        cout<< arr[i] << endl;

    }
    
}

int main(){
    int arr[] = {2,5,6};
    changeArr(arr , 3);

    cout<<"in main\n" ;

    for (int i = 0; i<3; i++){
        cout<< arr[i] << endl;
    }
    return 0;
}







