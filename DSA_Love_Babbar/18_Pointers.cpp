#include <iostream>
using namespace std;

int main(){
    int num = 5;
    cout<<num<<endl;

    //Address of operator -> &
    cout<<"The address of num is "<< &num <<endl;



    //pointer -> store address


    //DECLARE POINTER type 1
    int *ptr = &num;
    cout << *ptr << endl;  //gives value of variable whose address it is pointing
    cout << ptr << endl;   //gives address which is stored inside it
    


    //Pointer can update a value
    *ptr = (*ptr)*(*ptr);
    cout << "Updated value " << num << endl;



    //Size
    cout<<"Size of int is " << sizeof(num) << endl;
    cout<<"Size of pointer is " << sizeof(ptr) << endl;



    //type 2 to initialize pointer
    double d = 12.20;
    double *p1 = 0;
    p1 = &d;
    cout<<"address stored in pointer is " << p1<< endl;
    cout<<"value stored in pointer is " << *p1<< endl;
    

    return 0;
}