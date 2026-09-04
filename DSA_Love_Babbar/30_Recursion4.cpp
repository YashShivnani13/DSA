//MERGE SORT USING RECURSION


// #include <iostream>
// using namespace std;

// void merge(int *arr, int s, int e){        //"Take two sorted problems and combine them."

//     int mid = s + (e - s) / 2;

//     int len1 = mid-s+1;
//     int len2 = e-mid;

//     int *first = new int[len1];
//     int *second = new int[len2];

//     //copy values
//     int mainArrIndex = s;
//     for(int i=0; i<len1; i++){
//         first[i] = arr[mainArrIndex++];
//     }

//     mainArrIndex = mid+1;
//     for(int i=0; i<len2; i++){
//         second[i] = arr[mainArrIndex++];
//     }


//     //merge 2 sorted arrays
//     int index1 = 0;
//     int index2 = 0;
//     mainArrIndex = s;

//     while( index1 < len1 && index2 < len2 ){
//         if(first[index1] <= second[index2]){
//             arr[mainArrIndex++] = first[index1++];
//         }
//         else{
//             arr[mainArrIndex++] = second[index2++];
//         }
//     }

//     while( index1 < len1 ){
//         arr[mainArrIndex++] = first[index1++];
//     }
//     while( index2 < len2 ){
//         arr[mainArrIndex++] = second[index2++];
//     }

//     delete []first;
//     delete []second;
// }


// void mergeSort(int *arr, int s, int e){        //"Break the problem into smaller problems."
 
//     //base case
//     if(s>=e){
//         return;
//     }

//     int mid = s + (e - s) / 2;

//     //left part sort
//     mergeSort(arr, s, mid);

//     //right part sort
//     mergeSort(arr, mid+1, e);

//     //merge
//     merge(arr, s, e);
// }


// int main(){

//     int arr[12] = {2,5,1,9,3,54,65, 72, 12, 3,5, 64};
//     int n = 12;

//     mergeSort(arr, 0, n-1);

//     for(int i=0; i<n; i++){
//         cout << arr[i] << " ";
//     }

//     return 0;
// }






//QUICK SORT USING RECURSION

#include <iostream>
using namespace std;

int partition(int* arr, int s, int e){
    
    int pivot = arr[s];

    //count elements less than pivot
    int count = 0;
    for(int i = s+1; i<=e; i++){
        if( arr[i] <= pivot ){
            count++;
        }
    }

    //got the right position of pivot
    int pivotIndex = s + count;

    swap(arr[pivotIndex], arr[s]);

    //left and right part execution
    int i = s , j = e;

    while(i < pivotIndex && j > pivotIndex){

        //agar koi pivot se small element already left me h
        while(arr[i] <= pivot){
            i++;
        }

        //agar koi pivot se big element already right me h
        while(arr[j] > pivot){
            j--;
        }

        if(i < pivotIndex && j > pivotIndex){
            swap(arr[i++], arr[j--]);
        }
        
    }
    return pivotIndex;
}



void quickSort(int *arr, int s, int e){

    //base case
    if(s>=e){
        return;
    }

    //partition karege
    int p = partition(arr, s, e);

    //left part sort
    quickSort(arr, s, p-1);

    //right part sort
    quickSort(arr, p+1, e);
}

int main(){
    int arr[12] = {2,5,1,9,3,54,65, 72, 12, 3,5, 64};
    int n = 12;

    quickSort(arr, 0, n-1);

    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}