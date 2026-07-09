//pattern 1
// #include <iostream>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;

//     int i=1;
//     while(i<=n){
//         int j=1;                                                                  
//         while(j<=n){
//             cout<<"*";
//             j = j+1;
//         }
//         cout<<endl;
//         i=i+1;
//     }
    
//     return 0;
// }

//***
//***
//***







//pattern 2
// #include <iostream>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;

//     int i=1;
//     while(i<=n){
//         int j=1;                                                                  
//         while(j<=n){
//             cout<<i;
//             j = j+1;
//         }
//         cout<<endl;
//         i=i+1;
//     }
    
//     return 0;
// }

// 111
// 222
// 333





//pattern 3
// #include <iostream>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;

//     int i=1;
//     while(i<=n){
//         int j=1;                                                                  
//         while(j<=n){ 
//             cout<<j; 
//             j = j+1;
            
//         }
//         cout<<endl;
//         i=i+1;
//     }
    
//     return 0;
// }


// 1234
// 1234
// 1234
// 1234



//pattern 4
// #include <iostream>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;

//     int i=1;
//     while(i<=n){
//         int j=1;                                                                  
//         while(j<=n){ 
//             cout<<n-j+1; 
//             j = j+1;
            
//         }
//         cout<<endl;
//         i=i+1;
//     }
    
//     return 0;
// }

// 4321
// 4321
// 4321
// 4321



//pattern 5
// #include <iostream>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;

//     int i=1;
//     int count = 1;   //imp
    
//     while(i<=n){
//         int j=1;
        
//         while(j<=n){
//             cout<<count<<" ";
//             count=count+1;
//             j=j+1;
//         }
//         cout<<endl;
//         i=i+1;
//     }
//     return 0;
// }

// 1 2 3 4 
// 5 6 7 8 
// 9 10 11 12 
// 13 14 15 16 



//pattern 6
// #include <iostream>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;

//     int row=1;
    
//     while(row<=n){
//         int column=1;
        
//         while(column<=row){
//             cout<<"*";
            
//             column=column+1;
//         }
//         cout<<endl;
//         row=row+1;
//     }
//     return 0;
// }


// *
// **
// ***
// ****





//pattern 7
// #include <iostream>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;

//     int row=1;
    
//     while(row<=n){
//         int column=1;
        
//         while(column<=row){
//             cout<<row;
            
//             column=column+1;
//         }
//         cout<<endl;
//         row=row+1;
//     }
//     return 0;
// }


// 1
// 22
// 333
// 4444





// //pattern 8
// #include <iostream>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;

//     int row=1;
//     int count = 1;
    
//     while(row<=n){
//         int column=1;
        
        
//         while(column<=row){
//             cout<<count<<" ";
//             count = count +1 ;
//             column=column+1;
//         }
//         cout<<endl;
//         row=row+1;
//     }
//     return 0;
// }

// 1 
// 2 3 
// 4 5 6 
// 7 8 9 10 
// 11 12 13 14 15






//pattern 9
// #include <iostream>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;

//     int row=1;
    

//     while(row<=n){
//         int col=1;
//         int value=row;
//         while(col<=row){
//             cout<<value<<" ";
//             value=value+1;
//             col=col+1;
//         }
//         cout<<endl;
//         row = row+1;
        
//     }
//     return 0;
// }

// 1 
// 2 3 
// 3 4 5 
// 4 5 6 7 
// 5 6 7 8 9 




//pattern 10
// #include <iostream>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;

//     int row=1;
//     while(row<=n){
//         int col=1;
        
//         while(col<=row){
//             cout<<(row-col+1)<<" ";
        
//             col=col+1;
//         }
//         cout<<endl;
//         row=row+1;
//     }
//     return 0;
// }


// 1 
// 2 1 
// 3 2 1 
// 4 3 2 1





//pattern 11
// #include <iostream>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;
//     int row=1;
    
//     while(row<=n){
//         int col=1;
//         char ch = 'A' + row -1;
//         while(col<=n){
//             cout<<ch<<" ";
//             col=col+1;
//         }
//         row=row+1;
//         cout<<endl;
//     }
    
//     return 0;
// }

// A A A A 
// B B B B 
// C C C C 
// D D D D




//pattern 12
// #include <iostream>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;
//     int row=1;
    
//     while(row<=n){
//         int col=1;
//         char ch = 'A';
//         while(col<=n){
//             cout<<ch<<" ";
//             ch=ch+1;
//             col=col+1;
//         }
//         row=row+1;
//         cout<<endl;
//     }
    
//     return 0;
// }


// A B C D 
// A B C D 
// A B C D 
// A B C D 





//pattern 13
// #include <iostream>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;
//     int row=1;
//     char ch = 'A';
    
//     while(row<=n){
//         int col=1;
//         while(col<=n){
//             cout<<ch<<" ";
//             ch=ch+1;
//             col=col+1;
//         }
//         row=row+1;
//         cout<<endl;
//     }
    
//     return 0;
// }

// A B C D 
// E F G H 
// I J K L 
// M N O P 




//pattern 14
// #include <iostream>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;
//     int row=1;
    
//     while(row<=n){
//         int col=1;
        
//         while(col<=row){
//             cout<<char('A'+row-1)<<" ";
            
//             col=col+1;
//         }
        
//         row=row+1;
//         cout<<endl;
//     }
    
//     return 0;
// }


// A 
// B B 
// C C C 
// D D D D 



//pattern 15
// #include <iostream>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;
//     int row=1;
//     char ch='A';
//     while(row<=n){
//         int col=1;
        
//         while(col<=row){
//             cout<<ch<<" ";
//             ch = ch+1;
//             col=col+1;
//         }
        
//         row=row+1;
//         cout<<endl;
//     }
    
//     return 0;
// }


// A 
// B C 
// D E F 
// G H I J 





//pattern 16
// #include <iostream>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;
//     int row=1;
    
//     while(row<=n){
//         int col=1;
        
//         while(col<=row){
//             cout<<char('A'+row+col-2)<<" ";
            
//             col=col+1;
//         }
        
//         row=row+1;
//         cout<<endl;
//     }
    
//     return 0;
// }


// A 
// B C 
// C D E 
// D E F G 





//pattern 17
// #include <iostream>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;

//     int row=1;
//     while(row<=n){
//         int col=1;
//         char start = 'A'+n-row;

//         while(col<=row){
//             cout<<start<<" ";
//             start=start+1;
//             col=col+1;
//         }
//         row = row+1;
//         cout<<endl;
//     }
//     return 0;
// }

// D 
// C D 
// B C D 
// A B C D 





//pattern 18
// #include <iostream>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;

//     int row=1;

    
//     while(row<=n){

//         //print space
//         int space= n-row;
//         while(space){
//             cout<<" ";
//             space=space-1;
//         }

//         //print stars
//         int col=1;
//         while(col<=row){
//             cout<<"*";
//             col=col+1;
//         }
//         cout<<endl;
//         row=row+1;
        
//     }
//     return 0;
// }



//    *
//   **
//  ***
// ****




//pattern 19
// #include <iostream>
// using namespace std;

// int main(){

//     int n;
//     cin>>n;

//     int row=1;
//     while(row<=n){
//         int col=1;
        
//         while(col<= (n-row+1)){
//             cout<<"* ";
             
//             col=col+1;
//         }
//         cout<<endl;
//         row=row+1;
//     }
//     return 0;
// }


// * * * * 
// * * * 
// * * 
// *    




//pattern 20
// #include <iostream>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;

//     int row=1;
//     while(row<=n){
//         int space=row-1;
//         while(space){
//             cout<<" ";
//             space = space-1;
//         }

//         int col=1;
//         while(col<=(n-row+1)){
//             cout<<"*";
//             col=col+1;
//         }
//         cout<<endl;
//         row=row+1;
//     }
// }


// ****
//  ***
//   **
//    *




//pattern 21
// #include <iostream>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;

//     int row=1;
//     while(row<=n){
//         int space=row-1;
//         while(space){
//             cout<<" ";
//             space = space-1;
//         }

//         int col=1;
//         while(col<=(n-row+1)){
//             cout<<row;
//             col=col+1;
//         }
//         cout<<endl;
//         row=row+1;
//     }
// }



// 1111
//  222
//   33
//    4




//pattern 22
// #include <iostream>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;

//     int row=1;

    
//     while(row<=n){

//         //print space
//         int space= n-row;
//         while(space){
//             cout<<" ";
//             space=space-1;
//         }

//         //print stars
//         int col=1;
//         while(col<=row){
//             cout<<row;
//             col=col+1;
//         }
//         cout<<endl;
//         row=row+1;
        
//     }
//     return 0;
// }


//    1
//   22
//  333
// 4444



//pattern 23
// #include <iostream>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;

//     int row=1;
//     while(row<=n){
//         int space=row-1;
//         while(space){
//             cout<<" ";
//             space = space-1;
//         }

//         int col=1;
//         int value=row;
//         while(col<=(n-row+1)){
//             cout<<value;
//             value=value+1;
//             col=col+1;
//         }
//         cout<<endl;
//         row=row+1;
//     }
// }


// 1234
//  234
//   34
//    4





//pattern 24
// #include <iostream>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;

//     int row=1;
//     int value=1;
//     while(row<=n){

//         //print space
//         int space= n-row;
//         while(space){
//             cout<<" ";
//             space=space-1;
//         }

//         //print stars
//         int col=1;
//         while(col<=row){
//             cout<<value<<" ";
//             value=value+1;
//             col=col+1;
//         }
//         cout<<endl;
//         row=row+1;
        
//     }
//     return 0;
// }



//   1
//  23
// 456





//pattern 25
// #include <iostream>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;

//     int row=1;
//     while(row<=n){
//         int space = n-row;
//         while(space){
//             cout<<" ";
//             space=space-1;
//         }

//         int col=1;
//         while(col<=row){
//             cout<<col;
            
//             col=col+1;
//         }
        
//         int start = row-1;
//         while(start){
//             cout<<start;
//             start=start-1;
//         }
//         cout<<endl;
//         row=row+1;
//     }
// }


//    1
//   121
//  12321
// 1234321



//pattern 26
// #include <iostream>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;

//     int row=1;
//     while(row<=n){

//         int space=n-row+1;
//         int value=1;
//         while(space){
//             cout<<value;
//             value=value+1;
//             space=space-1;
//         }

//         int start = row-1;
//         while(start){
//             cout<<"**";
//             start=start-1;
//         }

        
//         int val=n-row+1;
//         while(val){
//             cout<<val;
//             val=val-1;
//         }

//         cout<<endl;
//         row=row+1;

//     }
// }

// 1234554321
// 1234**4321
// 123****321
// 12******21
// 1********1



      