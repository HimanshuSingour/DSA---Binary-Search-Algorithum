#include<bits/stdc++.h>
using namespace std;


// Binary Search Algorithum 
// Search 1st Occurance in Infinite Sorted Array

int binarySearcj(int arr[] , int low , int high , int key){
     
    int ans = -1;
	while(low <= high){
		int mid = low + (high - low) / 2;

		if(arr[mid] == key){
			ans = mid;
			high = low - 1; // for last occurance low = mid + 1
		}
		else if(arr[mid] > key){
			high = mid - 1;
		}
		else{
			low = mid + 1;
		}
	}

	return ans;
}

int solve(int arr[] ,int size , int key){

	int low = 0;
	int high = 1;
    

    // comparing key with high (jb tk key high ke andrrr na ajay)

    while(arr[high] < key){

    	low = high;
    	high = 2 * high; 

    }



   return binarySearcj(arr , low , high , key);

      
}

int main(){
    
	#ifndef ONLINE_JUDGE
	freopen("inputf.in" , "r" , stdin); 
	freopen("outputf.in" , "w" , stdout);
   	#endif


int arr[] = {0,0,0,0,0,0,0,1,1,1,1,1,1,1};  // Infinite
int size = sizeof(arr) / sizeof(int);

cout << "Test Case : " << solve(arr ,size , 1) << endl;


}