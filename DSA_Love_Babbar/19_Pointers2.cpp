//POINTER IN ARRAY

#include <iostream>
using namespace std;

int main(){
    int arr[10] = {2,5,6};

    cout<<" Address of first block of array is " << arr <<endl;
    cout<<" Address of first block of array is " << &arr <<endl;
    cout<<" Address of second block of array is " << &arr[1] <<endl;

    cout<<"Value at first index " << *arr << endl; 
    cout<<"Update Value at first index " << *arr+1 << endl;
    cout<<"Value at second index " << *(arr+1) << endl;

    return 0;
}