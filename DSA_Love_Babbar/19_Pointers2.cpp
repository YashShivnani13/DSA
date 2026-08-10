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





//Size

    int temp[10];
    cout << sizeof(temp) <<endl;      //size of temp array
    cout << sizeof(*temp) <<endl;     //size of first value in temp array
    cout << sizeof(&temp) <<endl;     //size of address of first location

    cout<<endl;
    int *pt = &temp[0];

    cout << sizeof(pt) <<endl;     //prints address size i.e 8
    cout << sizeof(*pt) <<endl;    //prints value size
    cout << sizeof(&pt) <<endl;    //prints address size








//Address
    
    int a[20] = {78,56,9,84};
    cout<< &a[0] <<endl;            //address of 0th index


    int *p = &a[0];
    cout<< &p <<endl;              //address of p






//Symbol Table

    int aarr[10];

    //ERROR
    // arr=arr+1;


    int *ptr = &aarr[0];
    cout << ptr << endl;

    ptr = ptr + 1;
    cout << ptr << endl;


    return 0;
}