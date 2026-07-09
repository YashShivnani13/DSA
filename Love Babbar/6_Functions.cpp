//Power

// #include <iostream>
// using namespace std;

// int power(){
//     int a, b;
//     cin>>a >> b;

//     int ans=1;
//     for(int i=1; i<=b; i++){
//         ans = ans*a;
//     }
//     return ans;
// }
// int main(){
//     int ans;
//     ans=power();
//     cout<<"Answer is "<<ans<<endl;
//     return 0;
// }






//even odd function

// #include <iostream>
// using namespace std;

// bool isEven(int a){
//     if(a&1){
//         return 0;
//     }else{
//         return 1;
//     }

// }
// int main(){
//     int num;
//     cin>>num;
//     if(isEven(num)){
//         cout<<"Number is even "<<num<<endl;
//     }else{
//         cout<<"Number is odd "<<num<<endl;
//     }
//     return 0;
// }





//nCr

// #include <iostream>
// using namespace std;


// int fact(int n){
//     int fact = 1;
//     for(int i=1; i<=n; i++){
//         fact = fact*i;
//     }
//     return fact;
// }


// int nCr(int n, int r){
//     int numerator = fact(n);
//     int denom= fact(r)*fact(n-r);

//     return numerator/denom;

    
// }

// int main(){

//     int n, r;
//     cin>>n>>r;

//     cout<< nCr(n, r);
//     return 0;
// }





//Counting

// #include <iostream>
// using namespace std;


// //FUNCTION SIGNATURE
// void printCount(int n){
//     //FUNCTION BODY
//     for(int i = 1; i<=n; i++){
//         cout<< i << " ";
//     }
//     cout<<endl;
// }

// int main(){
//     int n;
//     cin>>n;

//     //FUNCTION CALL
//     printCount(n);
//     return 0;
// }








//prime

// #include <iostream>
// using namespace std;

// bool isPrime(int n){
//     for(int i=2; i<n; i++){
//         if(n%i==0){
//             return 0;
//         }
//     }
//     return 1;
// }

// int main(){
//     int n;
//     cin>>n;

//     if(isPrime(n)){
//         cout<< " is a Prime no. "<<endl;
//     }else{
//         cout<< " is not a Prime no. "<<endl;
//     }
//     return 0;
// }






//Arithemetic progression AP=(3*n+7)

// #include <iostream>
// using namespace std;

// int AP(int n){

//     return 3*n+7;

// }

// int main(){
//     int n;
//     cin>> n;

//     cout<<AP(n);
//     return 0;
// }




//total no. of set bits a&b -> 1

// #include <iostream>
// using namespace std;

// int countSetBits(int n){
//     int count = 0;
//     while(n>0){
//         if(n & 1){
//             count++;
//         }
//         n=n>>1;
//     }
//     return count;
// }

// int main(){
//     int a, b;
//     cin>>a>>b;

//     int total = countSetBits(a) + countSetBits(b);

//     cout<<"Total set bits "<<total;

//     return 0;
// }






//fibbonacci series nth term
#include <iostream>
using namespace std;

int fibonacci(int n)
{
    if(n==0)
        return 0;

    if(n==1)
        return 1;

    int a=0,b=1,c;

    for(int i=2;i<=n;i++)
    {
        c=a+b;
        a=b;
        b=c;
    }

    return a;
}

int main()
{
    int n;
    cin>>n;

    cout<<fibonacci(n);

    return 0;
}