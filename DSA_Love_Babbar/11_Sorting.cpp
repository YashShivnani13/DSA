//SELECTION SORT

// #include <iostream>
// using namespace std;

// void selectionSort(int arr[], int n)
// {
//     for (int i = 0; i < n - 1; i++)
//     {
//         int minIndex = i;
//         for (int j = i + 1; j < n; j++)
//         {
//             if (arr[j] < arr[minIndex])
//             {
//                 minIndex = j;
//             }
//         }
//         swap(arr[minIndex], arr[i]);
//     }
// }

// int main()
// {
//     int arr[10] = {7, 9, 6, 8, 4, 5, 3, 2, 1, 0};
//     selectionSort(arr, 10);
//     for (int i = 0; i < 10; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     return 0;
// }





//BUBBLE SORT


// #include <iostream>
// using namespace std;


// void bubbleSort(int arr[], int n)
// {   
//     for(int i=1; i<n; i++){   //0 se n-1 ya to 1 se n

//         bool swapped = false;

//         for(int j=0; j<n-i; j++){   //if i is 0 se n-1 , j will be 0 se n-i-1
//             //process elements till n-i th index
//             if(arr[j]>arr[j+1]){
//                 swap(arr[j], arr[j+1]);
//                 swapped = true;
//             }
//         }
//         if(swapped==false){
//             //already sorted
//             break;
//         }
//     }
// }

// int main()
// {
//     int arr[10] = {7, 9, 6, 8, 4, 5, 3, 2, 1, 0};
//     bubbleSort(arr, 10);
//     for (int i = 0; i < 10; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     return 0;
// }



//INSERTION SORT

// #include <iostream>
// using namespace std;

// void insertionSort(int arr[], int n)
// {
//     int i = 1;

//     while (i < n)
//     {
//         int temp = arr[i];
//         int j = i - 1;

//         while (j >= 0 && arr[j] > temp)
//         {
//             arr[j + 1] = arr[j];
//             j--;
//         }

//         arr[j + 1] = temp;
//         i++;
//     }
// }

// int main()
// {
//     int arr[] = {7, 9, 6, 8, 4, 5, 3, 2, 1, 0};
//     int n = sizeof(arr) / sizeof(arr[0]);
//     insertionSort(arr, n);
//     cout << "Sorted Array: ";
//     int i = 0;
//     while (i < n)
//     {
//         cout << arr[i] << " ";
//         i++;
//     }
//     return 0;
// }


// using for loop

// #include <bits/stdc++.h> 
// void insertionSort(int n, vector<int> &arr){
//     for(int i=1; i<n; i++){
//         int temp=arr[i];
//         int j=i-1;
//         for(; j>=0; j--){
//             if(arr[j]>temp){
//                 //shift
//                 arr[j+1] = arr[j];
//             }
//             else{
//                 break;
//             }
//         }
//         arr[j+1] = temp;
//     }
// }