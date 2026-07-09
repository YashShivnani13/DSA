// #include <iostream>
// using namespace std;

// int main(){
//     int n = 5;

//     for (int i = 1; i<=n ; i++){

//         for (int j = 1 ; j<=n; j++){
//             cout<<j<<" * ";
    
//         }
//         cout<<endl;
//     }
    
//     cout<<endl;
//     return 0;

// }

// 1 2 3 4 5 
// 1 2 3 4 5 
// 1 2 3 4 5 
// 1 2 3 4 5 
// 1 2 3 4 5 





#include <iostream>
using namespace std;

int main(){
    int n=10;

    for(int i = 0; i<=n; i++){
        
        char ch = 'A';

        for(int j = 0; j<n ; j++){
            cout<<ch<<" ";
            ch = ch+1;
            
        }
        cout<<endl;     
    }
    return 0;

}


// A B C D E F G H I J 
// A B C D E F G H I J 
// A B C D E F G H I J 
// A B C D E F G H I J 
// A B C D E F G H I J 
// A B C D E F G H I J 
// A B C D E F G H I J 
// A B C D E F G H I J 
// A B C D E F G H I J 
// A B C D E F G H I J 
// A B C D E F G H I J