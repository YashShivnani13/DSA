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


#include <iostream>
using namespace std;


void bubbleSort(int arr[], int n)
{   
    for(int i=1; i<n; i++){   //0 se n-1 ya to 1 se n
        for(int j=0; j<n-i; j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j], arr[j+1]);
            }
        }
    }
}

int main()
{
    int arr[10] = {7, 9, 6, 8, 4, 5, 3, 2, 1, 0};
    bubbleSort(arr, 10);
    for (int i = 0; i < 10; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}