//Max Sum Subarray of size K

//FIXED LENGTH WINDOW



// #include <iostream>
// #include <vector>
// using namespace std;

// int MaxSubarraySum(vector<int> arr, int k){

//     int low = 0;
//     int high = k-1;

//     int sum = 0;

//     for(int i=low; i<=high; i++){
//         sum += arr[i];
//     }

//     int ans = sum;

//     while(high+1 < arr.size()){
//         sum -= arr[low];
//         low++;

//         high++;
//         sum += arr[high];

//         ans = max(ans,sum);
//     }
//     return ans;
// }

// int main(){

//     vector<int> arr = {100,200,300,100};
//     int k = 2;

//     int ans = MaxSubarraySum(arr, k);

//     cout << ans << endl;

//     return 0;
// }











//Minimum Size Subarray Sum


//Variable length window


// #include <iostream>
// #include <vector>
// #include <climits>
// using namespace std;

// int minSubArrayLen(int target, vector<int>& nums) {
//     int low = 0, high = 0;
//     int res = INT_MAX;
//     int sum = 0;

//     while(high < nums.size()){
//         sum += nums[high];
            
//         //agar sum of window is more than target then we reduce window size
//         while(sum >= target){
//             int len = high-low+1;

//             res = min(res,len);

//             sum -= nums[low];
//             low++;
//         }
//         high++;   //agar sum of window is less than target then we increase window size
//     }

//     if(res == INT_MAX) return 0;
        
//     return res;
// }


// int main(){
//     vector<int> arr = {1,1,1,1,2,1,1,1};
//     int target = 3;

//     cout<< minSubArrayLen(target,arr) << endl;

//     return 0;
// }