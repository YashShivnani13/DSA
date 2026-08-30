//reverse string using recursion

#include <iostream>
using namespace std;

void reverse(string& str, int i, int j){
    //base case
    if(i>j){
        return;
    }

    //processing
    swap(str[i], str[j]);
    i++;
    j--;

    //recursion
    reverse(str, i, j);
}

int main(){

    string strs = "yash";
    
    reverse(strs, 0, strs.size()-1);

    cout << strs << endl;

    return 0;

}