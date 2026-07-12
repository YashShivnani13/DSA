// #include <iostream>
// using namespace std;

// int Bs(int arr[], int size, int key){
//     int start = 0;
//     int end =  size-1;

//     int mid = (start+end)/2;

//     while(start<=end){
//         if(arr[mid]==key){
//             return mid;
//         }

//         //go to right part
//         if(key>arr[mid]){
//             start=mid+1;
//         }else{
//             //go to left part
//             end = mid-1;
//         }
//         mid = (start+end)/2;
//     }
//     return -1;
// }

// int main(){
//     int arr[6] = {2,4,6,8,10,12};
//     int brr[5] = {3,6,9,12,15};

//     int even = Bs(arr, 6, 10);
//     int odd = Bs(brr, 5, 3);
    
//     cout<< "Index of 10 is " << even << endl;
//     cout<< "Index of 3 is " << odd << endl;

//     return 0;
// }





//First and Last Position of an Element In Sorted Array

// #include <iostream>
// using namespace std;

// int firstOcc(int arr[], int n, int k){
//     int start = 0;
//     int end = n-1;
//     int ans=-1;

//     int mid = start + (end-start)/2;

//     while(start<=end){
//         if(arr[mid]==k){
//             ans = mid;
//             end = mid-1;
//         }

//         else if(k>mid){
//             start = mid+1;
//         }
        
//         else{
//             end = mid-1;
//         }
//         mid = start + (end-start)/2;
//     }
//     return ans;
// }


// int lastOcc(int arr[], int n, int k){
//     int start = 0;
//     int end = n-1;
//     int ans=-1;

//     int mid = start + (end-start)/2;

//     while(start<=end){
//         if(arr[mid]==k){
//             ans = mid;
//             start = mid+1;
//         }

//         else if(k>mid){
//             start = mid+1;
//         }
        
//         else{
//             end = mid-1;
//         }
//         mid = start + (end-start)/2;
//     }
//     return ans;
// }

 
// int main(){

//     int arr[10] = {1,2,3,3,3,3,4,6,7,9};
    
//     int First = firstOcc(arr,10,3);
//     int Last = lastOcc(arr,10,3);

//     cout<<"First occurence of key is "<<First << endl;
//     cout<<"Last occurence of key is "<<Last << endl;

//     return 0;
// }







//Total no. of Occurence in sorted array

// #include <iostream>
// using namespace std;

// int firstOcc(int arr[], int n, int k){
//     int start = 0;
//     int end = n-1;
//     int ans=-1;

//     int mid = start + (end-start)/2;

//     while(start<=end){
//         if(arr[mid]==k){
//             ans = mid;
//             end = mid-1;
//         }

//         else if(k>mid){
//             start = mid+1;
//         }
        
//         else{
//             end = mid-1;
//         }
//         mid = start + (end-start)/2;
//     }
//     return ans;
// }


// int lastOcc(int arr[], int n, int k){
//     int start = 0;
//     int end = n-1;
//     int ans=-1;

//     int mid = start + (end-start)/2;

//     while(start<=end){
//         if(arr[mid]==k){
//             ans = mid;
//             start = mid+1;
//         }

//         else if(k>mid){
//             start = mid+1;
//         }
        
//         else{
//             end = mid-1;
//         }
//         mid = start + (end-start)/2;
//     }
//     return ans;
// }

 
// int main(){

//     int arr[10] = {1,2,3,3,3,3,4,6,7,9};
    
//     int First = firstOcc(arr,10,3);
//     int Last = lastOcc(arr,10,3);

//     int total = (Last-First) +1;

//     cout<<"Total no. of occurence "<< total <<endl;

//     return 0;
// }







//pivot element (the smallest element) in a sorted and rotated array.

// #include <iostream>
// using namespace std;

// int pivot(int arr[], int n){
//     int s = 0;
//     int e = n-1;
//     int mid = s+(e-s)/2;

//     while(s<e){
//         if(arr[mid]>arr[0]){
//             s = mid+1;
//         }else{
//             e=mid;
//         }
//         mid = s+(e-s)/2;
//     }
//     return s;
// }

// int main(){
//     int arr [8] = {4,6,7,8,9,10,11,1};

//     cout<<"Pivot is at " << pivot(arr,8) << endl;

//     return 0;
// }








//square root of a integer n

#include <iostream>
using namespace std;

long long int bs(int n) {
    int s = 0;
    int e = n;
    long long int mid = s + (e - s) / 2;
    long long int ans = -1;

    while (s <= e) {
        long long int square = mid * mid;

        if (square == n) {
            return mid;
        }

        if (square < n) {
            ans = mid;
            s = mid + 1;
        } else {
            e = mid - 1;
        }

        mid = s + (e - s) / 2;
    }

    return ans;
}

double morePrecision(int n, int precision, int tempSol){
    double factor = 1;
    double ans = tempSol;

    for(int i=0; i<precision; i++){
        factor = factor/10;

        for(double j = ans; j*j<n; j=j+factor){
            ans = j;
        }
    }
    return ans;
}

int main(){
    int n;
    cout<<"Enter the number ";
    cin>>n;

    int tempSol = bs(n);
    cout<<" Answer is "<<morePrecision(n, 3, tempSol);

    return 0;
}