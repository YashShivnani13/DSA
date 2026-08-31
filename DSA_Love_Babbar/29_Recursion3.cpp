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