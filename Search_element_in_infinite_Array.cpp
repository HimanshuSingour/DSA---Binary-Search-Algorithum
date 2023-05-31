
#include<bits/stdc++.h>
using namespace std;


// Binary Search Algorithum 
// Search An Element In Infinite Array


int binarySearcj(int arr[] , int low , int high , int key){

	while(low <= high){
		int mid = low + (high - low) / 2;

		if(arr[mid] == key){
			return mid;
		}
		else if(arr[mid] > key){
			high = mid - 1;
		}
		else{
			low = mid + 1;
		}
	}
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


int arr[] = {3, 5, 7, 9, 10, 90, 100, 130, 140, 160, 170}; 
int size = sizeof(arr) / sizeof(int);

cout << "Test Case : " << solve(arr ,size , 100000) << endl;


}