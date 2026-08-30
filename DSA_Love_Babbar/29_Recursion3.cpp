//reverse string using recursion

#include <iostream>
using namespace std;

void reverse(string& str, int i){

    int j = str.size()-i-1;
    
    //base case
    if(i>j){
        return;
    }

    //processing
    swap(str[i], str[j]);
    i++;
    j--;

    //recursion
    reverse(str, i);
}

int main(){

    string strs = "yash";
    
    reverse(strs, 0);

    cout << strs << endl;

    return 0;

}