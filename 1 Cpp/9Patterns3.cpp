// #include <iostream>
// using namespace std;

// int main(){
//     int n = 5;

//     for (int i = 0; i<=n ; i++){

//         char ch = '*';
//         for (int j = 0 ; j<i+1; j++){  
//             cout<<ch<<" ";
//         }
//         cout<<endl;
//     }   
//     cout<<endl;
//     return 0;
// }


// * 
// * * 
// * * * 
// * * * * 
// * * * * * 
// * * * * * * 






// #include <iostream>
// using namespace std;

// int main(){

//     int n = 4;

//     for (int i = 0; i<n; i++){
//         for ( int j = 0; j<i+1; j++){
//             cout<< i+1;
//         }
//         cout<<endl;
//     }
//     return 0;
// }



// 1
// 22
// 333
// 4444






// #include <iostream>
// using namespace std;

// int main(){

//     int n = 6;

//     for (int i = 0; i<n; i++){
        
//         for ( int j = 1; j<i+1; j++){
//             cout<<j;
//         }
//         cout<<endl;
//     }
//     return 0;
// }




// 1
// 12
// 123
// 1234
// 12345






// #include <iostream>
// using namespace std;

// int main(){

//     int n = 6;

//     for (int i = 0; i<n; i++){
        
//         for (int j =i+1; j>0; j--){
//             cout<<j;
//         }
//         cout<<endl;
//     }
//     return 0;
// }


// 1
// 21
// 321
// 4321
// 54321
// 654321







// //Floyd's triangle pattern

// #include <iostream>
// using namespace std;

// int main() {
//     int n = 6;
//     int num = 1;
//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j <= i; j++) {
//             cout << num << " ";
//             num++;
//         }
//         cout << endl;
//     }
//     return 0;
// }


// 1 
// 2 3 
// 4 5 6 
// 7 8 9 10 
// 11 12 13 14 15 
// 16 17 18 19 20 21 










// //Inverted triangle pattern

// #include <iostream>
// using namespace std;

// int main() {
//     int n = 4;
//     for (int i = 0; i < n; i++) {
//         //spaces
//         for (int j = 0; j < i; j++) {
//             cout << " ";
//         }

//         //nums
//         for (int j=0; j<n-i; j++){
//             cout<<(i+1);
//         }
//         cout << endl;
//     }
//     return 0;
// }


// 1111
//  222
//   33
//    4





// #include <iostream>
// using namespace std;

// int main() {
//     int n = 4;
//     for (int i = 0; i < n; i++) {
//         // spaces
//         for (int j = 0; j < i; j++) {
//             cout << " ";
//         }
//         // characters
//         char ch = 'A' + i;
//         for (int j = 0; j < n - i; j++) {
//             cout << ch;
//         }
//         cout << endl;
//     }
//     return 0;
// }


// AAAA
//  BBB
//   CC
//    D






// Pyramid pattern

// #include <iostream>
// using namespace std;

// int main(){

//     int n=4;

//     for (int i=0; i<n; i++){

//         //spaces n-i-1
//         for(int j=0; j<n-i-1; j++){
//             cout<<" ";

//         }

//         //num1 j=(1 to i+1)
//         for (int j =1; j<=i+1;  j++){
//             cout<<j;

//         }

//         //num2 j= i to 1 
//         for (int j = i; j>=1; j--){
//             cout<<j;
//         }
//         cout<<endl;
//     }
//     return 0;
// }

//    1
//   121
//  12321
// 1234321






// #include <iostream>
// using namespace std;

// int main() {
//     int n = 5;
//     // Upper half
//     for (int i = 1; i <= n; i++) {
//         // Left stars
//         for (int j = 1; j <= i; j++) {
//             cout << "*";
//         }
//         // Spaces
//         for (int j = 1; j <= 2 * (n - i); j++) {
//             cout << " ";
//         }
//         // Right stars
//         for (int j = 1; j <= i; j++) {
//             cout << "*";
//         }
//         cout << endl;
//     }
//     // Lower half
//     for (int i = n; i >= 1; i--) {
//         // Left stars
//         for (int j = 1; j <= i; j++) {
//             cout << "*";
//         }
//         // Spaces
//         for (int j = 1; j <= 2 * (n - i); j++) {
//             cout << " ";
//         }
//         // Right stars
//         for (int j = 1; j <= i; j++) {
//             cout << "*";
//         }
//         cout << endl;
//     }
//     return 0;
// }


// *        *
// **      **
// ***    ***
// ****  ****
// **********
// **********
// ****  ****
// ***    ***
// **      **
// *        *