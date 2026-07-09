#include <iostream>
using namespace std;

int binarySearch (int arr[], int size, int key){
    int start = 0;
    int end = size -1;

    //int mid = (start + end)/2 ;
    int mid = start + (end-start)/2; 

    while (start <= end){

        if (arr[mid] == key){
            return mid;
        }

        //go to right part 
        if (key > arr[mid]){
            start = mid + 1;
        }

        //go to left part
        else if (key < arr[mid]){
            end = mid - 1;
        }
        mid = start + (end-start)/2 ;
 
    }
    return -1;
}


int main(){

    int even[6] = {2,5,7,9,12,15};

    int odd[7] = {1,4,8,11,14,19,25};

    cout<< binarySearch(even,6,15) << endl;
    cout<< binarySearch(odd,7,1) << endl;

    return 0;
}