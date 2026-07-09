//sum of 1 to n
// #include <iostream>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;
//     int sum=0;
//     for(int i=0; i<=n; i++){
//         sum += i;
//     }
//     cout<<sum;
// }



//FIBONACCI series
// #include <iostream>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;
//     int a=0;
//     int b=1;

//     cout<<a<<" "<<b<<" ";
//     for(int i=1; i<=n; i++){
//         int nextNumber=a+b;
//         cout<<nextNumber<<" ";

//         a=b;
//         b=nextNumber;
//     }
// }


// 0 1 1 2 3 5 8 13 21 34 55 89 




//prime no. or not
// #include <iostream>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;

//     bool isPrime=1;

//     for(int i=2; i<n; i++){

//         if(n%i == 0){
//             isPrime=0;
//             break;
//         }
//     }
//     if(isPrime==0){
//         cout<<"NOT Prime";
//     }else{
//         cout<<"Prime";
//     }
//     return 0;
// }




