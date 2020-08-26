//Sort an array of 0s, 1s and 2s
//Dutch Flag

#include<bits/stdc++.h>
using namespace std;
int main() 
{
	//code
    int T ; 
    cin>>T;
    while(T--)
    {
        int n;
        cin>>n ; 
        int arr[n];
        for(int  i = 0 ; i< n ; i ++)
        {
            cin>>arr[i];
        }
        
        int l = 0;
        int m  = 0;
        int h = n-1 ; 
        
        for(int i = 0 ; i < n ; i ++)
        {
            if(arr[m] == 0 )
            {
                swap(arr[l] ,arr[m]); 
                m++;
                l++;
            }
            
            else if (arr[m] == 1)
            {
                m++;
            }
            
            else if(arr[m] == 2)
            {
                swap(arr[h] , arr[m]) ; 
                h--;
                
            }
        }
        
        for(int x =0  ; x<n ; x++)
        {
            cout<<arr[x]<<" ";
        } 
        
        cout<<endl;
        
    }
	return 0;
}