//Decimal To Binary
// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     cin >> n;

//     int ans = 0;
//     int place = 1;

//     while (n != 0) {
//         int bit = n & 1;

//         ans = bit * place + ans;

//         place *= 10;
//         n = n >> 1;
//     }

//     cout << "Answer is " << ans << endl;
// }



//negative decimal to binary
// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     cout << "Enter a negative number ";
//     cin >> n;

//     // Step 1: Ignore the negative sign (turn -5 into 5)
//     int positive_n = -n; 

//     // Step 2: Convert to 2's complement using the math trick
//     // (For 8-bit numbers, we subtract from 256)
//     int twos_comp_num = 256 - positive_n;

//     // Step 3: Convert to binary using YOUR original loop!
//     int ans = 0;
//     int place = 1;
//     int temp = twos_comp_num;

//     while (temp != 0) {
//         int bit = temp & 1;       // Get the rightmost bit
//         ans = bit * place + ans;  // Build the number visually
//         place *= 10;              // Move to the next decimal place
//         temp = temp >> 1;         // Shift bits to the right
//     }

//     cout << "Answer is " << ans << endl;
//     return 0;
// }



//binary to decimal
#include <iostream>
#include <math.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int ans=0;
    int i=0;
    while(n!=0){
        int digit = n % 10;
        if(digit==1){
            ans = ans+ pow(2,i);
        }
        n= n/10;
        i++;
    }
    cout<<ans<<endl;
}