#include<bits/stdc++.h>
using namespace std;


// Binary Search Algorithum 
// Peak Element of an array
// 1. the element called peak element which is greateer than mid - 1 and mid + 1 elemets

int solve(int arr[], int size){

	int start = 0;
	int end = size - 1;

	while(start <= end){
        

        // finding mid of the Array
		int mid = start + (end - start) / 2;

       // Edge Cases 1: if middle element is in 0th Index
	   // Edge Cases 2: if middle element is in size - 1th index

		if(mid == 0 || mid == size - 1) {
			return mid;
		}
        
        // Check for Nabouring of mid that both are smaller than mid
		if(arr[mid] >= arr[mid - 1] &&  arr[mid] >= arr[mid + 1]){
			return mid;
		}

		// If Abouve Condition is not satisfing The We need to move left or right
		// So,  check who is greater than mid -> and move on 
		else if(mid > 0 && arr[mid - 1] > arr[mid]){
			end = mid - 1;
		}
		
		else{
			start = mid + 1;
		}
    }
}


int main(){
    
	#ifndef ONLINE_JUDGE
	freopen("inputf.in" , "r" , stdin); 
	freopen("outputf.in" , "w" , stdout);
   	#endif


int arr[] = {1, 3, 20, 4, 1, 0};
int size = sizeof(arr) / sizeof(int);

cout << "Test Case : " << solve(arr ,size) << endl;
cout << "Test Case : " << solve(arr ,size) << endl;
cout << "Test Case : " << solve(arr ,size) << endl;
cout << "Test Case : " << solve(arr ,size) << endl;


}