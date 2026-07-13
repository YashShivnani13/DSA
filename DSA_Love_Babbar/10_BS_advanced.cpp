//Book allocation problem

// bool isPossible(vector<int> arr, int n, int m,int mid){
// 	int studentCount = 1;
// 	int pageSum = 0;

// 	for(int i=0; i<n; i++){
// 		if(pageSum+arr[i] <= mid){
// 			pageSum += arr[i];
// 		}
// 		else{
// 			studentCount++;
// 			if(studentCount>m || arr[i]>mid){
// 				return false;
// 			}
// 			pageSum = arr[i];
// 		}
// 	}
// 	return true;
// }

// int findPages(vector<int>& arr, int n, int m) { 
// 	if (m > n) {
//         return -1;
//     }
// 	int s=0;
// 	int sum =0;
// 	for(int i=0; i<n; i++){
// 		sum+=arr[i];
// 	}
// 	int e=sum;
// 	int ans = -1;
// 	int mid = s+(e-s)/2;

// 	while(s<=e){
// 		if(isPossible(arr,n,m,mid)){
// 			ans = mid;
// 			e = mid-1;
// 		}
// 		else{
// 			s=mid+1;
// 		}
// 		mid = s+(e-s)/2;
// 	}
// 	return ans;
// }




// Painter's Partition Problem

// bool isPossible(vector<int> &boards, int k, int mid){
//     int painterCount = 1;
//     int paintSum = 0;

//     for(int i=0; i<boards.size(); i++){
//         if(paintSum+boards[i]<=mid){
//             paintSum+=boards[i];
//         }
//         else{
//             painterCount++;
//             if(painterCount>k || boards[i]>mid){
//                 return false;
//             }
//             paintSum = boards[i];
//         }
//     }
//     return true;
// }


// int findLargestMinDistance(vector<int> &boards, int k)
// {
//     int s = 0;
//     int sum = 0;

//     for(int i=0; i<boards.size(); i++){
//         sum+=boards[i];
//     }

//     int e = sum;
//     int ans = -1;
//     int mid = s+(e-s)/2;

//     while(s<=e){
//         if(isPossible(boards,k,mid)){
//             ans = mid;
//             e=mid-1;
//         }
//         else{
//             s=mid+1;
//         }
//         mid = s+(e-s)/2;
//     }
//     return ans;
// }