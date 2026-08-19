//MACROS


// #include <iostream>
// using namespace std;

// #define PI 3.14

// int main(){
//     int r = 5;

//     double area = PI * r * r;

//     cout<<"Area is "<< area << endl;

//     return 0;
// }





// #include <iostream>
// using namespace std;


// #define SQUARE(x) (x * x)

// int main()
// {
//     int n = 7;
//     int result = SQUARE(n);
//     cout << "Square of " << n << " is " << result;
//     return 0;
// }





// C++ program to illustrate the predefined macros
#include <iostream>
using namespace std;

int main()
{

    // Display the current line number and the source file
    // name
    cout << "This is line " << __LINE__ << " in file "
         << __FILE__ << "\n";

    // Display the compilation date
    cout << "Compiled on " << __DATE__ << " at " << __TIME__;

    return 0;
}