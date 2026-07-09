// int firstOcu(vector <int>& arr, int n, int k){
//     int s=0, e=n-1;
//     int ans= -1;
//     int mid = s+ (e-s)/2;

//     while(s<=e){
//         if (arr[mid]==k){
//             ans=mid;
//             e = mid-1;
//         }
//         else if (arr[mid]>k){
//             e = mid-1;
//         }
//         else if (arr[mid]<k){
//             s= mid+1;
//         }
//         mid = s+(e-s)/2;
//     }
//     return ans;
// }

// int lastOcu(vector <int>& arr, int n, int k){
//     int s=0, e=n-1;
//     int ans= -1;
//     int mid = s+ (e-s)/2;

//     while(s<=e){
//         if (arr[mid]==k){
//             ans=mid;
//             s= mid+1;
//         }
//         else if (arr[mid]>k){
//             e = mid-1;
//         }
//         else if (arr[mid]<k){
//             s= mid+1;
//         }
//         mid = s+(e-s)/2;
//     }
//     return ans;
// }




// pair<int, int> firstAndLastPosition(vector<int>& arr, int n, int k)
// {
//     pair<int , int> p;
//     p.first = firstOcu(arr,n,k);
//     p.second = lastOcu(arr,n,k);

//     return p;
// }
