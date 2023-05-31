#include<bits/stdc++.h>
using namespace std;


// Binary Search Algorithum 
// Peak Element of an array
// the element called peak element which is greateer than mid - 1 and mid + 1 elemets
// Find Peak Element In Biotonic Array
// the biotonic Array Is Stickly Increasing and after a peaking point stickly Decreasing
int binarySearch(int arr[] , int low , int high , int element){
   
   while(low <= high){

  		int mid = low + (high - low) / 2;

  		if(arr[mid] == element){
               return mid;
 
  		}
  		else if(arr[mid] > element){
  			high = mid - 1;
  		}
  		else{
  			low = mid + 1;
  		}
 
   }

   return -1;

 }

int helper(int arr[], int size){

	int start = 0;
	int end = size - 1;

	while(start <= end){
        

        // finding mid of the Array
		int mid = start + (end - start) / 2;

 
        // Check for Nabouring of mid that both are smaller than mid
		if(arr[mid] > arr[mid - 1] &&  arr[mid] > arr[mid + 1]){
			return mid;
		}
        
        // if either side is grater from the middle element go to that side
		else if(arr[mid - 1] > arr[mid]){

			end = mid - 1;	

		}

		else{
			start = mid + 1;
		}
    }
}


int solve(int arr[] , int size , int element){

	int peak = helper(arr , size);

	int l = binarySearch(arr ,  0 , peak , element);

    if(l != -1){
     	return l;
    }

    return binarySearch(arr , peak , size - 1 , element);

}




int main(){
    
	#ifndef ONLINE_JUDGE
	freopen("inputf.in" , "r" , stdin); 
	freopen("outputf.in" , "w" , stdout);
   	#endif


int arr[] = { 5, 6, 7, 8, 9, 10, 3, 2, 1};
int size = sizeof(arr) / sizeof(int);

cout << "Test Case : " << solve(arr ,size ,2) << endl;



}