// #include <iostream>
// using namespace std;

// int LinearS(int arr[] , int size , int target){
//     for (int i = 0; i<size ; i++){
//         if (arr[i] == target){       //found
//             return i;
//         }
//     }
//     return -1;           //not found
// }

// int main(){
//     int arr[] = {2,4,7,5,2,7,8,20};
//     int size = 8;
//     int target = 21;

//    cout<< LinearS(arr, size, target) << endl;

//     return 0;
// }






//if there are two targets

#include <iostream>
using namespace std;

int Ls(int arr[], int size , int target , int target2){
    int count = 0;
    for (int i = 0 ; i<size ; i++){
        if (arr[i] == target){
            count++ ;
            if (count == target2){
                return i;
            }
        }
    }
    return -1;
}

int main(){
    int arr[100];
    int n;
    cin>>n; 

    cout << "enter array" << endl;
    for (int i=0 ; i<n ; i++){
        cin >> arr[i] ; 

    }
    

    cout << "enter target : " << endl;
    int target;
    cin >> target;


    cout << "Your Target is: " <<endl;
    cout << Ls(arr, n, target, 1) << endl;    //1,2,3 is occurences
    cout << Ls(arr, n, target, 2) << endl;
    cout << Ls(arr, n, target, 3) << endl;
    
    
    return 0;

}