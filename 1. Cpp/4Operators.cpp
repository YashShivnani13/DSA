// //arithmetic operators
// #include <iostream>
// using namespace std;

// int main(){
//     int a = 11, b = 5;

//     cout<< "sum = "<< (a+b) << endl;
//     cout<< "substraction = "<< (a-b)<< endl;
//     cout<< "multiplication = "<< (a*b)<< endl;
//     cout<< "division = "<< (a/b)<< endl; //quotient
//     cout<< "modulo = "<< (a%b)<< endl; //remainder


//     //division to bring values in point we have to typecast
//     cout<< (5/2)<< endl;
//     cout<< (5/(double)2);  //typecasting

//     return 0;
// }





// //relational operators
// #include <iostream>
// using namespace std;

// int main(){
//     cout<<  (3<5)<< endl;  //true->1
//     cout<<  (3>5)<< endl;  //false->0

//     return 0;
    
// }




//logical operators
#include <iostream>
using namespace std;

int main(){
    cout<<  !(3>5)<< endl;  //NOT

    cout<< ((3>5)  || (3>1))<< endl; //OR   //if one is true then ans is true

    cout<< ((3>5)  && (3>1))<< endl; //AND   //if one is false then ans is false

    return 0;
    
}