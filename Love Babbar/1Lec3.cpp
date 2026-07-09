// #include <iostream>
// using namespace std;

// int main(){
//     char ch;
//     cout<<"Enter a character : ";
//     cin>>ch;

//     if(ch >= 'a' && ch<='z'){
//         cout<<"It is lowercase" <<endl;
//     }
//     else if(ch >= 'A' && ch<='Z'){
//         cout<<"It is uppercase" <<endl;
//     }
//     else if(ch >= '0' && ch<='9'){
//         cout<<"It is numeric" <<endl;
//     }
//     else{
//         cout<<"It is special character"<<endl;
//     }

//     return 0;
// }





//print 1 to N

// #include <iostream>
// using namespace std;

// int main(){
//     int n;
//     cout<<"Enter value of n : ";
//     cin>>n;

//     int i=1;
//     while(i<=n){
//         cout<<i<<" ";
//         i=i+1;
//     }

//     return 0;
// }






//Sum 1 to N

// #include <iostream>
// using namespace std;

// int main(){
//     int n;
//     cout<<"Enter value of n : ";
//     cin>>n;

//     int i=1;
//     int sum=0;

//     while(i<=n){
//         sum=sum+i;
//         i=i+1;  
//     }

//     cout<<"The sum is "<<sum;

//     return 0;
// }    






//Sum of all even numbers

// #include <iostream>
// using namespace std;

// int main(){
//     int n;
//     cout<<"Enter n ";
//     cin>>n;

//     int i=2;
//     int sum=0;
//     // while(i<=n){               // //method 1
//     //     sum=sum+i;
//     //     i=i+2;
//     // }

//     while (i <= n) {               //method 2
//     if (i % 2 == 0) { // If the number is perfectly divisible by 2
//         sum += i;
//     }
//     i++; // Move to the very next number
// }

//     cout<<"Sum of even nos is "<<sum;
//     return 0;
// }






//Fahrenite to celsius table

// #include<iostream>
// using namespace std;

// int main(){
//     double fahrenheit;
//     cout << "Enter the temperature in Fahrenheit: ";
//     cin >> fahrenheit;

//     double celsius = (fahrenheit - 32.0) * 5.0 / 9.0;

//     cout << "The temp in Celsius is " << celsius << endl;
//     return 0;
// }






// Prime or not
// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter the no. to check: ";
//     cin>>n;
    
//     int i=2;
//     while(i<n){
//         if(n%i==0){
//             cout<<"Not Prime for "<<i<<endl;
//         }else{
//             cout<<"Prime for "<<i<<endl;
//         }
//         i=i+1;

//     }
    
//     return 0;
// }

