#include<bits/stdc++.h>
using namespace std;


// Binary Search Algorithum 

// subvstract all the elemns by targete value then 

int solve(int arr[] , int size , int target){
      
      int low = 0;
      int high = size - 1;
    

    if(arr[0] > target){
    	return arr[0];
    }

    if(arr[size - 1] < target){
    	return arr[size - 1];
    }

    
    // at end of the loop 
    // if the element not present
    // the low will the ceiling of the element 
    // and the high will point to the floor of the element

	while(low <= high){
		int mid = low + (high - low) / 2; 

		if(arr[mid] == target){
			return arr[mid];
		}
		else if(arr[mid] > target){
			high = mid - 1;
		}
		else{
			low = mid + 1;
		}
	}
    
   // getting absulute value
    int a = abs(arr[low] - target);
    int b = abs(arr[high] - target);

    // comparing both a and b we can return smaller
    if(a < b){
    	return arr[low];
    }
    else{
    	return arr[high];
    }

   
}



int main(){
    
	#ifndef ONLINE_JUDGE
	freopen("inputf.in" , "r" , stdin); 
	freopen("outputf.in" , "w" , stdout);
   	#endif


int arr[] = {2, 5, 10, 12, 15}; // arr[0] and arr[size - 1] edge cases
int size = sizeof(arr) / sizeof(int);

cout << "Test Case : " << solve(arr ,size , 14) << endl;


}