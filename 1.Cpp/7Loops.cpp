//while loop
// #include<iostream>
// using namespace std;

// int main(){

//     int n=100;
//     int count=1;

    
//     while(count<=n){
//     cout<<count<<" ";
//     count++;         // inside the loop coz ek ek karke no. print karwa rha hu
//     }


//     return 0;
// }

 


//SUM OF NOS FROM 1 TO N

//For loop
// #include<iostream>
// using namespace std;

// int main(){

//     int n=100;
//     int sum=0;

//     for(int i=1; i<=n; i++){
//         sum +=i;
//         if (i==10){             //new block for break
//             break;            //keyword
//         }
        
//     }

//     cout<<"Sum: " <<sum<<endl;

//     return 0;
// }





//while loop
// #include<iostream>
// using namespace std;

// int main(){

//     int n=100;
//     int i = 1;
//     int sum=0;

//     while (i<=n){
//         sum += i;
//         i++;
        
        
//     }
//     cout<<sum<<endl;           // outside the loop coz we need only final sum
  

//     return 0;
// }





//SUM OF ALL ODD NOS FROM 1 TO N

//for
// #include <iostream>
// using namespace std;

// int main(){
//     int n = 50;
//     int oddSum = 0;

//     for (int i=1; i<=n; i++){
//         if (i%2 != 0){
//             oddSum += i;
//         }

//     }

//     cout<< "oddSum is : "<< oddSum << endl;
// }





// //while
// #include <iostream>
// using namespace std;

// int main(){
//     int n = 5;
//     int oddSum = 0;
//     int i = 1;

//     while (i<=n){
//         if(i%2 != 0){
//             oddSum += i ;
//         }
//     i++ ;
//     }
    

//     cout<< "oddSum is : "<< oddSum << endl;
// }







//do while loop
#include <iostream>
using namespace std;

int main(){

    int n = 10;
    int i = 1;

    do{
        cout<< i <<endl;
        i++ ;
    } while (i<=n);

    return 0;
}