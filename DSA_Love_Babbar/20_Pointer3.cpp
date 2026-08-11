//POINTERS IN  CHARACTER ARRAY

// #include <iostream>
// using namespace std;

// int main(){

//     int arr[5] = {1,2,3,4,5};
//     cout << arr << endl;             //gives address of first value

//     char ch[6] = "abcde";
//     cout << ch << endl;             //gives whole content

//     char *c = &ch[0];
//     cout << c << endl;             //gives whole content / prints entire content in ch
//     cout << *c << endl;            //gives only first alphabet ex- a only from abcde

//     cout << *(c+1) << endl;        //gives content of second alphabet ex- b  from abcde
//     cout << *(c)+1 << endl;         //updates value of first index

//     cout << c+2 << endl;          //skips the no. of alphabets given


//     char temp = 'x';
//     char *p = &temp;
//     cout<< p << endl;             //prints temporary characters till it does not found any null character



//     return 0;
// }
 



//POINTERS IN FUNCTIONS

#include <iostream>
using namespace std;

void print(int *p){
    cout << p << endl;      //address
    cout << *p << endl;     //first value
    cout << p+1 << endl;    // update address
    cout << *p+10 << endl;  // update first value
}

int main(){

    int arr[5] = {1,2,3,4,5};

    print(arr);

    return 0;
}


