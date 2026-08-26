// //Factorial

// #include <iostream>
// using namespace std;

// int factorial(int n){

//     //base case
//     if(n==0){
//         return 1;
//     }


//     return n*factorial(n-1);  //recursive relation
// }

// int main(){
//     int n;
//     cin>>n;

//     int ans = factorial(n);
//     cout<<ans<<endl;

//     return 0;
// }







// //Power

// #include <iostream>
// using namespace std;

// int power(int n){

//     //base case
//     if(n==0){
//         return 1;
//     }

//     int smallerproblem = power(n-1);
//     int biggerProblem = 2*smallerproblem;

//     return biggerProblem;  //recursive relation
// }

// int main(){
//     int n;
//     cin>>n;

//     int ans = power(n);
//     cout << "2 POWER " <<n << " IS " << ans << endl;

//     return 0;
// }




//Print counting

#include <iostream>
using namespace std;

int count(int n){
    if(n==0){
        return 0;
    }

    cout << n << endl;
    
    count(n-1);

    
    cout << n << endl;
}

int main(){
    int n;
    cin>>n;
    cout << endl;
    count(n);
    
    return 0;
}