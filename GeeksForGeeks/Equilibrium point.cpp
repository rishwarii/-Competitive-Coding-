//Equilibrium point
#include <iostream>
using namespace std;

int main() 

{
    int T ;
    cin>>T ; 
    while(T--)
    {
        int n;
        cin>>n;
        int a[n];
        for(int i = 0 ; i<n ; i++)
        {
            cin>>a[i];
        }
        
        int sum = 0 ; 
         for(int i = 0 ; i<n ; i++)
        {
            sum+=a[i] ; 
        }
        
        int leftsum = 0 ; 
        int rightsum = sum ; 
        
         for(int i  = n ; i>=0 ; i--)
        {
            sum-=a[i] ; 
            if(sum == leftsum)
            {
                 cout<<i;
            }
            
            else if(sum > leftsum)
            {
                leftsum+=arr[n-i];
                
            }
        }
    }
	return 0;
}