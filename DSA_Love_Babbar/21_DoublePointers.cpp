#include <iostream>
using namespace std;

//Function in double pointers
void update(int **p){
    // p = p+1;   //no change

    // *p = *p+1;    //change only in p address
    
    **p = **p + 1;   //change in value of i

}


int main(){
    int i=5;
    int *p = &i;
    int **p2 = &p;

    //PLAYING WITH POINTERS
    // cout << &i << endl;
    // cout << p << endl;
    // cout << *p2 << endl;


    // cout << i << endl;
    // cout << *p << endl;
    // cout << **p2 << endl;

    // cout << &p << endl;
    // cout << p2 << endl;

    

    cout<<"before "<<i<<endl;
    cout<<"before "<<p<<endl;
    cout<<"before "<<p2<<endl;

    update(p2);

    cout<<"after "<<i<<endl;
    cout<<"after "<<p<<endl;
    cout<<"after "<<p2<<endl;



    return 0;
}