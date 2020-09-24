//Trapping Rain Water

#include <bits/stdc++.h>
using namespace std;

int main() {
    
	int T ; 
	cin>>T;
	
	while(T--)
	{
	    int n ; 
	    cin>>n;
	    int arr[n];
	    
	    for(int i = 0 ;i<n ; i++)
	    {
	        cin>>arr[i];
	    }
	    
	    
	    int arr_rm[n] ; 
	    int arr_lm[n] ; 
	    arr_lm[0]  = arr[0];
	    arr_rm[n-1] = arr[n-1] ;
	    

	    
	    for(int i = 1 ; i< n ; i++)
	    {
	       arr_lm[i]  = max(arr_lm[i-1] ,arr[i]) ;
	         
	    }
	    
	    for(int i = n-2 ; i >= 0 ; i--)
	    {
	        arr_rm[i] = max(arr_rm[i+1] , arr[i]) ;
	        
	    }
	    
	    int lvl = 0 ; 

	    
	    for(int i = 0 ; i< n ; i ++)
	    {
	        lvl= lvl+ ( (min(arr_lm[i] ,arr_rm[i])) - arr[i] ); 
	    }
	    
	    cout<<lvl<<"\n" ; 
	   
	   
	}
	return 0;
}