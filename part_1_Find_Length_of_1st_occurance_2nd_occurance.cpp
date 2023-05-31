#include<bits/stdc++.h>
using namespace std;


// Binary Search Algorithum

int solveFirstOccurance(int arr[] , int size , int element){

	int low = 0;
	int high = size - 1;

	int ans = 0;

    // Ittrate Over high
	while(low <=  high){
        
        // Find Middle Of the Array
		int mid = low + (high - low) / 2;
 
        // case 1:       
		if(arr[mid] == element) {

			ans = mid;
		    high = mid - 1; // this will Tell You the 1st or Last Occurance

		}
			
 
        // case 2:  
		else if(arr[mid] > element){

		    high = mid - 1;	
		} 

        // case 3:  
		else{

		     low = mid + 1;	
		} 
	}

	return ans;
}


int solveSecondOccurance(int arr[] , int size , int element){

	int low = 0;
	int high = size - 1;

	int ans = 0;

    // Ittrate Over high
	while(low <=  high){
        
        // Find Middle Of the Array
		int mid = low + (high - low) / 2;
 
        // case 1:       
		if(arr[mid] == element) {

	        ans = mid;
		    low = mid + 1; // this will Tell You the 1st or Last Occurance

		}
			
 
        // case 2:  
		else if(arr[mid] > element){

		    high = mid - 1;	
		} 

        // case 3:  
		else{

		     low = mid + 1;	
		} 
	}

	return ans;
}


void Calculate(int arr[] , int size , int element){


 int i = solveFirstOccurance(arr , size , element);
 int j = solveSecondOccurance(arr , size , element);

 cout << j - i + 1; // Give You the Length of 1st to 2nd occurance length


}

int main(){
    
	#ifndef ONLINE_JUDGE
	freopen("inputf.in" , "r" , stdin); 
	freopen("outputf.in" , "w" , stdout);
   	#endif


int arr[] = {2 , 4 , 10 , 10 , 10 , 15 , 20 , 20};
int size = sizeof(arr) / sizeof(int);

int element = 15;


Calculate(arr, size , element);







}