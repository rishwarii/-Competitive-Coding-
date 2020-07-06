
#include <bits/stdc++.h> 
using namespace std; 
int subarr(int n , int arr[] , int req_sum)
{
    
		return 0;
}



int main()
{
	int n , req_sum , t;
	cin>>t;
	cin>>n>>req_sum;
	int arr[n];
	int curren_sum= arr[0];
	int end = 1;
	int start = 0;
	int flag  = 0;
	int c;

	while(t--)
	{
	    for (int p=0;p<n;p++)
	    {
	     cin>>arr[p];
	    }
    
    
    	for(c = 0 ; c<n;)
		{
			if (curren_sum == req_sum)
			{
				
				 flag = 1;
				break;
			}
			if(curren_sum> req_sum && start< end)
			{
				curren_sum-=arr[start++];

			}
			else if( curren_sum < req_sum && end < n)
			{
				curren_sum+=arr[end ++];
			}
            
	        
		}
		
		if(flag == 1)
	        cout << start << " " << end-1 << endl;
	        
	     else 
	        cout << -1 << endl;
	  
	    
		
	}
	return 0;
}

