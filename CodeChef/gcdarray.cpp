// Contest Code:LTIME88B Problem Code:GCDOPS
//partial

#include <bits/stdc++.h>
using namespace std ; 

// int gcd(int a, int b)
// {
//     if (b == 0)
//         return a;
//     return gcd(b, a % b); 
     
// }

int main() {
	int T  ; 
	cin>>T ; 
	while(T--)
	{
    	int n ; 
    	cin>>n ; 
    	int a[n]; 
    	for(int i = 1 ; i <= n ; i++)
    	{
    	    cin>>a[i] ;
    	}
    	
    	bool flag  = true ; 
    	for(int i = 1 ; i <= n ; i++)
    	
    	{
    	    if(a[i] != i)
    	    {
    	       for(int j = i-1 ; i>0 ; i--)
    	       {
    	           int g =  __gcd(i,a[j]) ; 
    	           if(g == a[i])
    	           {
    	              flag  = true ; 
    	           }
    	           else
    	           {
    	               flag = false ; 
    	           }
    	           
    	       }
    	     
    	    }
    	      
    	   //   else
    	   //  i ++ ; 
    	}
    	
    	if(flag == true)
    	cout<<"YES" ;
    	else
    	cout<<"NO" ; 
	}
	
	return 0;
}

