#include <iostream>
using namespace std;

int main(){
    int num = 5;
    cout<<num<<endl;

    //Address of operator -> &
    cout<<"The address of num is "<< &num <<endl;

    //pointer -> store address


    //DECLARE POINTER
    int *ptr = &num;
    cout << *ptr << endl;  //gives value of variable whose address it is pointing
    cout << ptr << endl;   //gives address which is stored inside it

    //Size
    cout<<"Size of int is " << sizeof(num) << endl;
    cout<<"Size of pointer is " << sizeof(ptr) << endl;

    double d = 12.20;
    double *p1 = &d;
    cout<<"Size of pointer is " << sizeof(p1) << endl;

    return 0;
}