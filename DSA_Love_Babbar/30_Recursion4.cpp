//MERGE SORT USING RECURSION


// #include <iostream>
// using namespace std;

// void merge(int *arr, int s, int e){        //"Take two sorted problems and combine them."

//     int mid = s + (e - s) / 2;

//     int len1 = mid-s+1;
//     int len2 = e-mid;

//     int *first = new int[len1];
//     int *second = new int[len2];

//     //copy values
//     int mainArrIndex = s;
//     for(int i=0; i<len1; i++){
//         first[i] = arr[mainArrIndex++];
//     }

//     mainArrIndex = mid+1;
//     for(int i=0; i<len2; i++){
//         second[i] = arr[mainArrIndex++];
//     }


//     //merge 2 sorted arrays
//     int index1 = 0;
//     int index2 = 0;
//     mainArrIndex = s;

//     while( index1 < len1 && index2 < len2 ){
//         if(first[index1] <= second[index2]){
//             arr[mainArrIndex++] = first[index1++];
//         }
//         else{
//             arr[mainArrIndex++] = second[index2++];
//         }
//     }

//     while( index1 < len1 ){
//         arr[mainArrIndex++] = first[index1++];
//     }
//     while( index2 < len2 ){
//         arr[mainArrIndex++] = second[index2++];
//     }

//     delete []first;
//     delete []second;
// }


// void mergeSort(int *arr, int s, int e){        //"Break the problem into smaller problems."
 
//     //base case
//     if(s>=e){
//         return;
//     }

//     int mid = s + (e - s) / 2;

//     //left part sort
//     mergeSort(arr, s, mid);

//     //right part sort
//     mergeSort(arr, mid+1, e);

//     //merge
//     merge(arr, s, e);
// }


// int main(){

//     int arr[12] = {2,5,1,9,3,54,65, 72, 12, 3,5, 64};
//     int n = 12;

//     mergeSort(arr, 0, n-1);

//     for(int i=0; i<n; i++){
//         cout << arr[i] << " ";
//     }

//     return 0;
// }






//QUICK SORT USING RECURSION


// #include <iostream>
// using namespace std;

// int partition(int* arr, int s, int e){
    
//     int pivot = arr[s];

//     //count elements less than pivot
//     int count = 0;
//     for(int i = s+1; i<=e; i++){
//         if( arr[i] <= pivot ){
//             count++;
//         }
//     }

//     //got the right position of pivot
//     int pivotIndex = s + count;

//     swap(arr[pivotIndex], arr[s]);

//     //left and right part execution
//     int i = s , j = e;

//     while(i < pivotIndex && j > pivotIndex){

//         //agar koi pivot se small element already left me h
//         while(arr[i] <= pivot){
//             i++;
//         }

//         //agar koi pivot se big element already right me h
//         while(arr[j] > pivot){
//             j--;
//         }

//         if(i < pivotIndex && j > pivotIndex){
//             swap(arr[i++], arr[j--]);
//         }
        
//     }
//     return pivotIndex;
// }



// void quickSort(int *arr, int s, int e){

//     //base case
//     if(s>=e){
//         return;
//     }

//     //partition karege
//     int p = partition(arr, s, e);

//     //left part sort
//     quickSort(arr, s, p-1);

//     //right part sort
//     quickSort(arr, p+1, e);
// }

// int main(){
//     int arr[12] = {2,5,1,9,3,54,65, 72, 12, 3,5, 64};
//     int n = 12;

//     quickSort(arr, 0, n-1);

//     for(int i=0; i<n; i++){
//         cout<<arr[i]<<" ";
//     }

//     return 0;
// }





//SUBSETS (Power set) leetcode 78


// class Solution {

// private:
//     void solve(vector<int> nums, vector<int> current, int index, vector<vector<int>>& ans){

//         //base case
//         if(index>=nums.size()){
//             ans.push_back(current);
//             return;
//         }

//         //exclude
//         solve(nums, current, index+1, ans);

//         //include
//         int element = nums[index];
//         current.push_back(element);
//         solve(nums, current, index+1, ans);
//     }

// public:
//     vector<vector<int>> subsets(vector<int>& nums) {
//         vector<vector<int>> ans;
//         vector<int> current;
//         int index = 0;

//         solve(nums, current, index, ans);
//         return ans;
//     }
// };








//17. Letter Combinations of a Phone Number


// class Solution {
// private:
//     void solve(string digits, string output, int index, vector<string>& ans,
//                string mapping[]) {

//         // base case
//         if (index >= digits.size()) {
//             ans.push_back(output);
//             return;
//         }

//         int number = digits[index] - '0';
//         string value = mapping[number];

//         for (int i = 0; i < value.size(); i++) {
//             output.push_back(val[i]);
//             solve(digits, output, index + 1, ans, mapping);
//             output.pop_back();
//         }
//     }

// public:
//     vector<string> letterCombinations(string digits) {
//         vector<string> ans;
//         string output;
//         int index = 0;
//         string mapping[10] = {"",    "",    "abc",  "def", "ghi",
//                               "jkl", "mno", "pqrs", "tuv", "wxyz"};

//         solve(digits, output, index, ans, mapping);
//         return ans;
//     }
// };








//Permutations leetcode 46


// class Solution {
// private:
//     void solve(vector<int>& nums, int index, vector<vector<int>>& ans){

//         //base case
//         if(index>=nums.size()){
//             ans.push_back(nums);
//             return;
//         }

//         for(int j=index; j<nums.size(); j++){
//             swap(nums[index], nums[j]);
//             solve(nums, index+1, ans);

//             //bactrack
//             swap(nums[index], nums[j]);
//         }
    

//     }
// public:
//     vector<vector<int>> permute(vector<int>& nums) {
//         vector<vector<int>> ans;
        
//         int index=0;


//         solve(nums, index, ans);
//         return ans;
//     }
// };










//RAT IN A MAZE PROBLEM


// #include <bits/stdc++.h> 

// bool check(vector<vector<int>>& arr, int n, int x, int y,
//            vector<vector<int>>& visited){
//     if((x>=0 && x<n) && (y>=0 && y<n) && arr[x][y]==1 && visited[x][y]==0){
//         return true;
//     }
//     else{
//         return false;
//     }
// }

// void solve(vector < vector < int >> & arr, int n, vector<string>& ans, string path, vector<vector<int>>& visited, int x, int y){

//     //base case
//     if(x == n-1 && y == n-1){
//         ans.push_back(path);
//         return;
//     }


//     visited[x][y]=1;



//     //left
//     int newx = x;
//     int newy = y-1;

//     if(check(arr,n,newx,newy,visited)){
//         path.push_back('L');
//         solve(arr,n,ans,path,visited,newx,newy);
//         path.pop_back();
//     }


//     //right
//     newx = x;
//     newy = y+1;

//     if(check(arr,n,newx,newy,visited)){
//         path.push_back('R');
//         solve(arr,n,ans,path,visited,newx,newy);
//         path.pop_back();
//     }

//     //down
//     newx = x+1;
//     newy = y;

//     if(check(arr,n,newx,newy,visited)){
//         path.push_back('D');
//         solve(arr,n,ans,path,visited,newx,newy);
//         path.pop_back();
//     }

//     //up
//     newx = x-1;
//     newy = y;

//     if(check(arr,n,newx,newy,visited)){
//         path.push_back('U');
//         solve(arr,n,ans,path,visited,newx,newy);
//         path.pop_back();
//     }


//     visited[x][y] = 0;
// }


// vector < string > searchMaze(vector < vector < int >> & arr, int n) {
//     vector<string> ans;


//     //base case
//     if(arr[0][0]==0){
//         return {};
//     }

//     int srcx = 0;
//     int srcy = 0;

//     vector < vector < int >> visited = arr;

//     for(int i=0; i<n; i++){
//         for(int j=0; j<n; j++){
//             visited[i][j]=0;
//         }
//     }

//     string path = "";

//     solve(arr,n,ans,path,visited,srcx,srcy);

//     sort(ans.begin(), ans.end());
//     return ans;
// }