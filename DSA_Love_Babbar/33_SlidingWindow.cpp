//Max Sum Subarray of size K


#include <iostream>
#include <vector>
using namespace std;

int MaxSubarraySum(vector<int> arr, int k){

    int low = 0;
    int high = k-1;

    int sum = 0;

    for(int i=low; i<=high; i++){
        sum += arr[i];
    }

    int ans = sum;

    while(high+1 < arr.size()){
        sum -= arr[low];
        low++;

        high++;
        sum += arr[high];

        ans = max(ans,sum);
    }
    return ans;
}

int main(){

    vector<int> arr = {100,200,300,400};
    int k = 2;

    int ans = MaxSubarraySum(arr, k);

    cout << ans << endl;

    return 0;
}