
using namespace std;
#include <bits/stdc++.h> 
#include <algorithm>

int triple(int n)
{   int i;
    int c = 0;
    int arr[n];
        for(int i = 0;i<n;i++)
        {
            cin>>arr[i];
        }
        
        sort(arr,arr+n);
        
        
         for(i=n-1;i>=0;i--)
         {  int j = 0 ;
            int k = i-1;
            
             while(j<k)
             {
                 if(arr[i]<arr[k]+arr[j])
                 {
                     j++;
                 }
                 
                 else if ( arr[i]== arr[k]+arr[j])
                 {
                     c++;
                 }
                 
                 else
                 k--;
             }
         }
         
         cout<<c<<endl;
         
       
    
    
    return 0;
}

int main() 
{
    
    int t ,i ;
    cin>>t;
    
    
    
    
    while(t--)
    {
        int n;
        cin>>n;
        
        triple(n);
    }
	//code
	return 0;

}