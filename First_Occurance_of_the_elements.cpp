#include<bits/stdc++.h>
using namespace std;


// Binary Search Algorithum

int solveFirstOccurance(int arr[] , int size , int element){

	int low = 0;
	int high = size - 1;

	int ans = -1;

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


int main(){
    
	#ifndef ONLINE_JUDGE
	freopen("inputf.in" , "r" , stdin); 
	freopen("outputf.in" , "w" , stdout);
   	#endif


int arr[] = {1 , 2 , 3 , 3 , 3 , 1 , 4 , 7 , 8 , 8 , 7};
int size = sizeof(arr) / sizeof(int);


cout << solveFirstOccurance(arr , size , 3);





}