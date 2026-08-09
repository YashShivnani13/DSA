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

    cout << &num << endl;  //gives address it is pointing
    cout << num << endl;   //gives value
    


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

    

    //copying a pointer
    int *q = ptr;
    cout << q << "-" << ptr << endl;
    cout << *q << "-" << *ptr << endl;


    
    //playing with pointers
    (*q)++;
    cout<<*q<<" ";

    *q = *q+1;
    cout<<*q<<" ";

    cout<<q<<" ";
    q = q+1;      //address updates //as int stores 4 bytes so address is updated by 4 bytes
    cout<<q<<" ";
    

    return 0;
}