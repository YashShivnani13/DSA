#include <iostream>
#include <vector>
using namespace std;

int main(){

    vector <int> arr;
    // cout << arr[3] << endl;

    cout<<"Size of vector= " << arr.size() << endl;  //size

    arr.push_back(30);   //add in vec
    arr.push_back(80);
    arr.push_back(90);
    arr.push_back(3);
    cout<<"Size of vector after push back= " << arr.size() << endl;


    arr.pop_back();     //deletes last value of vector
    cout<<"Size of vector after pop back= " << arr.size() << endl;
    
    
    for (int i : arr){              //for each loop
        cout << i << endl;
    }

    cout << endl;
    cout << arr.front() << endl;        //shows first value
    cout << arr.back() << endl;           // shows last value

    cout << arr.at(1)<< endl ;    //shows value at any index

    cout << arr.capacity() << endl;     //capacity (gets doubled)

    
}