// #include <iostream>
// using namespace std;

// int main(){

//     int arr[5] = {12,6,76,5,4};

//     // cout<< arr[3]<< endl;
//     // arr[3] = 90;   // Modifying th value
//     // cout<< arr[3]<< endl;
//     // // gives garbage value as it does not exists array checks from 0 to size-1
//     // cout<< arr[50]<< endl;


//     cout<< sizeof(arr) <<endl;  // give how many bytes stored
//     cout<< sizeof(arr) / sizeof(int) <<endl;  //gives sizeof array

//     return 0;
// }




// #include <iostream>
// using namespace std;

// int main(){
    
//     int size = 5;
//     int arr[size];

//     cout<<"enter array elements"<<endl;
//     for(int i=0; i<size; i++){
//         cin >> arr[i]; 
//     }

//     cout << "these are your array" << endl;
//     for (int i=0 ; i<size; i++){       
//         cout<< arr[i] << endl;
//     }

//     return 0;
// }





// to calculate smallest value

// #include <iostream>
// #include <climits>
// using namespace std;

// int main(){

//     int arr[5] = {12,6,-76,5,4};
//     int size = 5;

//     int smallest = INT_MAX ;
//     for (int i=0; i<size; i++){
//         // if (arr[i] < smallest){
//         //     smallest = arr[i];
//         // }
//         smallest = min(arr[i], smallest);
//     }
//     cout << "smallest value is : "<< smallest << endl;
//     return 0;
// }    




// // to calculate largest value
// #include <iostream>
// #include <climits>
// using namespace std;

// int main(){

//     int arr[5] = {12,6,-76,5,4};
//     int size = 5;

//     int largest = INT_MIN ;
//     for (int i=0; i<size; i++){
//         if (arr[i] > largest){
//             largest = arr[i];
//         }
//        // largest = max(arr[i], largest);
//     }
//     cout << "largest value is : "<< largest << endl;
//     return 0;
// }  






//Babbar

// array using for loop
// #include <iostream>
// using namespace std;

// int main(){

//     int arr[10];
//     int n = 10;

//     for (int i = 0; i<n; i++){
//         arr[i] = {1};

        
//         cout << arr[i] << endl;
//     }    
// return 0;
// }




// MIN-MAX

// #include <iostream>
// #include <climits>
// using namespace std;

// int getMax(int num[], int n){

//     int max = INT_MIN ;

//     for ( int i=0 ; i<n; i++){
//         if (num[i] > max){
//             max = num[i];
//         }
//     }

//     return max;
// }


// int getMIN(int num[], int n){
//     int mini =   INT_MAX;

//     for (int i = 0; i<n; i++){
//         mini = min(mini , num[i]);
//     }
//     return mini;

// }
    


// int main(){

//     int size;
//     cout << "enter size: ";
//     cin >> size;

//     int arr[100];

//     cout <<"enter element : " << endl;
//     for ( int i=0 ; i<size; i++){
//         cin>> arr[i];
//     }

    
//     cout << "MAX : " << getMax(arr , size) << endl;
//     cout<< "MIN : "<< getMIN(arr , size);

        
// return 0;
// }









//SUM of Array

#include <iostream>
using namespace std;


int main(){

    int sum = 0 ;   // to take product always initialize it to 1 
    int size;

    cout << "Enter Size of array : "<< endl;
    cin >> size ;
    
    int arr[100];


    cout << "Enter array : "<< endl;
    for (int i=0 ; i<size; i++){
        cin >> arr[i];
    }

    cout << "Your array is : " << endl;
    for ( int i=0; i<size; i++){
        cout << arr[i] << endl;
    }

    cout << "Sum of array is : " << endl;
    for(int i =0; i<size ; i++){
        sum += arr[i];           
    }
    cout << sum << endl; 

    

    return 0;

}


