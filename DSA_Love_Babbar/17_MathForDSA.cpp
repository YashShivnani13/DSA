//Algorithms

//Sieve of Eratosthenes -> Prime nos.


// class Solution {
// public:
//     int countPrimes(int n) {
//         int count = 0;
//         vector<bool> prime(n+1, true);

//         prime[0]=prime[1]=false;

//         for(int i=2; i<n; i++){
//             if(prime[i]){
//                 count++;
//             }
//             for(int j=2*i; j<n; j=j+i){
//                 prime[j]=false;
//             }
//         }
//         return count;
//     }
// };





//Euclid's Algorithm -> GCD/HCF


// #include <iostream>
// using namespace std;

// int gcd(int a, int b){
    
//     if(a==0){
//         return b;
//     }

//     if(b==0){
//         return a;
//     }

//     while(a!=b){
//         if(a>b){
//             a = a-b;
//         }
//         else{
//             b = b-a;
//         }
//     }
//     return a;
// }

// int main(){
//     int a,b;
//     cin>>a>>b;

//     cout<<"The gcd is " << gcd(a,b)<<endl;
// }





//Modular Exponentiation


// #include <bits/stdc++.h>

// int modularExponentiation(int x, int n, int m)
// {
//     long long ans = 1;
//     while(n > 0)
//     {
//         if(n % 2 == 1){
//             ans = (ans * x) % m;
//         }

//         x = (1LL * x * x) % m;
//         n = n / 2;
//     }
//     return ans;
// }