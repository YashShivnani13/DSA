//Reference Variable

#include <iostream>
using namespace std;

//Return By Reference   ->   will give error (bad practice)
// int& update3(int n){
//     int a=10;
//     int &ans = a;
//     return ans;
// }


//Pass By Reference
void update(int n){
    n++;
    cout<<n<<endl;
}
void update2(int &n){
    n++;
    cout<<n<<endl;
}

int main(){
    int i=5;
    // int &j = i;

    // cout << i << endl;
    // i++;
    // cout << i << endl;
    // j++;
    // cout << i << endl;
    // cout << j << endl;

    update(i);
    update2(i);
    

    return 0;

}