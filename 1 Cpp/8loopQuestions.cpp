// check if a number is prime or not

#include <iostream>
using namespace std;

int main(){
    int n = 9;
    bool isPrime = true;

    
    // Handle edge cases: 0 and 1 are not prime
    if (n <= 1) {
        isPrime = false;
    }

    for (int i=2; i*i<=n; i++){
        if (n%i == 0){   //non prime
            isPrime = false;
            break;


        }

    }

    if (isPrime == true){
        cout << "Prime no."<<endl;
    } else {
        cout << "not prime "<<endl;
    }
    
} 

