//vote age

// #include <iostream>
// using namespace std;

// int main(){
//     int age;
//     cout<<("enter your age- ");
//     cin>> age;

//     if(age>=18){
//         cout<<("can vote");
//     } else {
//         cout<<("cannot vote");
//     }
    
//     return 0;

// }





//odd even

// #include <iostream>
// using namespace std;

// int main(){
//     int number;
//     cout<<("enter any number- ");
//     cin>> number;

//     if(number%2==0){
//         cout<<("The no. you entered is even");
//     } else {
//         cout<<("The no. you entered is odd");
//     }
    
//     return 0;

// }




//lowercase uppercase

#include <iostream>
using namespace std;

int main(){
    char ch;
    cout<<("Enter any character : ");
    cin>>ch;
    

    // if(ch>='a' && ch<='z'){
    //     cout<<("Character is lowercase");
    // } else {
    //     cout<<("Character is uppercase");
    // }
               
             //OR

    if(ch>=97 && ch<=122){                      //"IMPLICIT CONVERSION IS USED TO CONVERT A-Z INO ASCII VALUES"
        cout<<("Character is lowercase");
    } else {
        cout<<("Character is uppercase");
    }

    return 0;

}