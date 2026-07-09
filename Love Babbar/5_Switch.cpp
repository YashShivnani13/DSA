//switch syntax
// #include <iostream>
// using namespace std; 

// int main(){
//     char ch = '1';

//     switch(ch){
//         case 1: cout<< "Int 1"<<endl;
//                 break;
//         case '1': cout<< "Char 1"<<endl ;  
//                 break;
//         default: cout<<"Default case"<<endl;
//     }
//     return 0;
// }



//Mini calculator
// #include <iostream>
// using namespace std;
// int main(){
//     int a,b;

//     cout<<"Enter the value of a"<<endl;
//     cin>>a;

//     cout<<"Enter the value of b"<<endl;
//     cin>>b;

//     char op;
//     cout<<"Enter the value of operation"<<endl;
//     cin>>op;

//     switch(op){
//         case '+': cout<<(a+b)<<endl;
//                     break;
//         case '-': cout<<(a-b)<<endl;
//                     break;
//         case '/': cout<<(a/b)<<endl;
//                     break;
//         case '*': cout<<(a*b)<<endl;
//                     break;
//         case '%': cout<<(a%b)<<endl;
//                     break;
//         default: cout<<"Enter valid operation";
//     }
//     return 0;
// }



//Notes reqd
#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the amount: ";
    cin>>n;
    int choice=1;

    switch(choice){
        case 1 : cout<<"No. of 100 notes reqd : "<<(n/100)<<endl;
                    n%=100;
        case 2 : cout<<"No. of 50 notes reqd : "<<(n/50)<<endl;
                    n%=50;
        case 3 : cout<<"No. of 20 notes reqd : "<<(n/20)<<endl;
                    n%=20;
        case 4 : cout<<"No. of 1 notes reqd : "<<(n/1)<<endl;
                    n%=1;               
    }
    return 0;
}