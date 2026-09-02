//reverse string using recursion


// #include <iostream>
// using namespace std;

// void reverse(string& str, int i){

//     int j = str.size()-i-1;

//     //base case
//     if(i>j){
//         return;
//     }

//     //processing
//     swap(str[i], str[j]);
//     i++;
//     j--;

//     //recursion
//     reverse(str, i);
// }

// int main(){

//     string strs = "yash";
    
//     reverse(strs, 0);

//     cout << strs << endl;

//     return 0;

// }








//Check Palindrome using recursion


// #include <iostream>
// using namespace std;

// bool check(string s, int i, int j){

//     //base case
//     if(i>j){
//         return true;
//     }

//     if(s[i] != s[j]){
//         return false;
//     }
//     else{
//         //recursive call
//         return check(s, i+1, j-1);
//     }
// }

// int main(){
//     string str = "aabaa";
//     cout<<endl;

//     bool isPalindrome = check(str, 0, str.size()-1);

//     if(isPalindrome){
//         cout << "It is a Palindrome" << endl;
//     }
//     else{
//         cout << "It is not a Palindrome" << endl;
//     }

//     return 0;
// }








//Power using recursion


// #include <iostream>
// using namespace std;

// int power(int a, int b){

//     //base case
//     if(b==0)
//         return 1;
//     if(b==1)
//         return a;

//     //recursive call
//     int ans = power(a, b/2);

//     //b is even
//     if(b%2 == 0){
//         return ans * ans;
//     }
//     else{
//         //b is odd
//         return a*ans*ans;
//     }

// }

// int main(){

//     int a,b;
//     cin>>a>>b;

//     int ans = power(a,b);
//     cout << "Answer is " << ans;

//     return 0;
// }







//Bubble sort using recursion


#include <iostream>
using namespace std;

void bubbleSort(int *arr, int size){

    //base case - already sorted
    if(size == 0 || size == 1){
        return;
    }

    //processing 
    for(int i=0; i<size-1; i++){
        if(arr[i] > arr[i+1]){
            swap(arr[i], arr[i+1]);
        }
    }

    //recursive call
    bubbleSort(arr, size-1);

    
}

int main(){
    int arr[5] = {4,6,1,9,2};


    bubbleSort(arr, 5);

    for(int i=0; i<5; i++){
        cout<< arr[i] <<" ";
    }

    return 0;
}
