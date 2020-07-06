
#include <stdio.h>
#include<bits/stdc++.h>
using namespace std;

int max_sum(int ar[],int n ,int arrs)
{    //elements presnt in the array
    int i,k;
    for ( i = 0; i < n; i++)
    {
        /* code */
        if (arrs==ar[i])
            cout<<i<<i;
    }
    break;

    //summing window
    for(i=0;i<k;i++)
    {
        int sumwindow += ar[i];

    }

    //sliding the window
    for(i=k;i<n;i++)
    {
       int sumslide += sumwindow + ar[i]- ar[i-1];
       if (sumslide==arrs)
        {
            cout<<i<<k-1;
            
        }
        
        else
        {
            sumslide = sumwindow;
        }
    }


}



int main() {
    int t ;
    int ar[n];
    cin>>t;
    while (t--)
    {   int  arrs;
        cin>>n>>arrs;
        for(int p=0;p<n;p++)
        {
            cin>>ar[p];
        }
         max_sum(ar[],n ,arrs);

    }
	
	return 0;
}






























