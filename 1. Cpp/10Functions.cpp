// #include <iostream>
// using namespace std;

// void printHello(){
//     cout<<"hello \n";
// }

// int main(){
//     printHello();
//     printHello();
//     printHello();

//     return 0;
// }





// #include <iostream>
// using namespace std;

// int printHello(){
//     cout<<"hello \n";
//     return 3;
// }

// int main(){
// //    int val = printHello();
// //    cout<< val;
   
//    cout<< printHello() << endl; 

//    return 0;
// }












//parameters

// #include <iostream>
// using namespace std;

// int sum(int a, int b){         //parameters(int a, int b)
//     int s = a+b;            
//     return s;
// }

// int main(){

//    cout<< sum(10,2) << endl;    //arguements(10,2)

//    return 0;
// }



//sum of N nos
// #include <iostream>
// using namespace std;

// int sumN(int n){
//     int sum = 0;

//     for (int i = 0; i<=n; i++){
//         sum+=i;
//     }
//     return sum;
// }

// int main(){
//     cout<<sumN(5);

//     return 0;
// }






//Factorial
// #include <iostream>
// using namespace std;

// int factorial(int n){
//     int fact = 1;

//     for (int i = 1; i<=n; i++){
//         fact*=i;
//     }
//     return fact;
// }

// int main(){
//     cout<<factorial(5);

//     return 0;
// }






//Pass by value
// #include <iostream>
// using namespace std;

// void changeX(int x){
//     x=2*x;
//     cout<<"x = "<<x<<endl;
// }

// int main(){
//     int x = 5;
//     changeX(x);

//     cout<< "x = "<<x<<endl;
//     return 0;
// }








//Q calculate sum of digits of a number
// #include <iostream>
// using namespace std;

//  int sumOfDigits (int num){
//     int digSum = 0;

//     while(num > 0){
//        int lastDigit = num % 10;
//        num /= 10;
//        digSum += lastDigit; 
//     }

//     return digSum;
//  }


// int main(){
    
//     cout<<"Sum is = "<< sumOfDigits(6545) << endl;

//     return 0;
// }




//Calculate nCr binomial coefficient for n and r
#include <iostream>
using namespace std;

int factorial(int n){
   int fact = 1;

   for (int i = 1; i<=n; i++){
      fact*=i;
   }
   return fact;
}

int nCr (int n, int r){
   int factN = factorial(n);
   int factR = factorial(r);
   int factNmR = factorial(n-r);

   return factN/(factR*factNmR);
}

int main(){
   int n = 8, r=2;
   
   cout<< nCr(n,r) << endl;

   return 0;
}
