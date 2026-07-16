//ARRAY STL

// #include <iostream>
// #include <array>                      //not used much
// using namespace std;

// int main(){
//     array<int,4> a = {8,9,6,7};

//     int size = a.size();

//     for(int i=0; i<size; i++){
//         cout<< a[i] << endl;
//     }

//     cout<< "Element at 2nd index is " << a.at(2) <<endl;

//     cout<< "Empty or not " << a.empty() << endl;

//     cout<< "First Element " << a.front() <<endl;
//     cout<< "Last Element " << a.back() << endl;

//     return 0;
// }





//VECTOR 

// #include <iostream>
// #include <vector>
// using namespace std;

// int main(){
//     vector <int> a(5,1);   //size of vector is 5 and initialize it with 1
//     vector <int> v;

//     cout<<"Capacity -> " << v.capacity() << endl;

//     v.push_back(1);
//     cout<<"Capacity -> " << v.capacity() << endl;

//     v.push_back(2);
//     cout<<"Capacity -> " << v.capacity() << endl;

//     v.push_back(7);
//     cout<<"Capacity -> " << v.capacity() << endl;      //shows total space/capacity in vector

//     cout<<"Size -> " << v.size() << endl;              //shows total elements in vector

//     cout << "Element at index 3 is " << v.at(2) <<endl;  //shows value at index


//     cout<< "First Element " << v.front() <<endl;      //shows first element
//     cout<< "Last Element " << v.back() << endl;      //shows last element

//     cout<<"before pop" << endl;
//     for(int i : v){          //for loop
//         cout<<i<<" ";
//     }
    

//     v.pop_back();          //pops last element
    
//     cout<<"after pop" << endl;
//     for(int i : v){         
//         cout<<i<<" ";
//     }

//     // Deleting element '2'
//   	// v.erase(find(v.begin(), v.end(), '2'));

//     v.clear();    //to empty the vector. size of vector goes to 0 but capacity remains same.
// }






//DEQUE

#include <iostream>
#include <deque>
using namespace std;

int main(){

    deque <int> d;

    d.push_back(6);      //pushes element in array
    d.push_front(9);     //pushes element in front of array

    for(int i : d){
        cout << i << " ";
    }
    cout<<endl;

    // d.pop_back();    //pops last element in array
    // d.pop_front();   //pops first element in array

    cout<< d.at(1) <<endl;

    cout<< d.front() <<endl;

    cout<<  d.back() <<endl;

    cout<< d.empty() <<endl;

   cout<< d.empty() <<endl;
   
   d.erase(d.begin(), d.begin()+1); //range to erase  
}   