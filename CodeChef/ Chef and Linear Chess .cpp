// Chef and Linear Chess 

#include<bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
	int t ;
	cin>>t;
	while(t--)

	{
	   	int n , k ;
		cin>>n;
		cin>>k;
		int minum = k;
		int arr[k] ;
		int count = 0 ;
		for(int i = 0 ; i<n ;i++)
		{
			cin>>arr[i] ; 
		}

		for(int i = 0 ; i < n ;i++)
		{
		    if(k%arr[i] == 0 )
			{
			    int kmin = k/arr[i] ; 
			    minum = min(minum,kmin) ; 
				count++;
			}
			
		}
		if(count != 0 )
		{
		   cout<<k/minum<<"\n";
		}
		
		else
		{
		    cout<<"-1"<<"\n"; 
		}

    }
    
    return 0 ;
}
