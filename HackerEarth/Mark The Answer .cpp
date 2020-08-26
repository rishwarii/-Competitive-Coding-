// Mark The Answer 

#include<bits/stdc++.h>
using namespace std ; 

int main ()
{
    int n , x ;
    cin>>n;
    cin>>x ;
    int arr[n];
    int skips = 0 ;
    int qsnc = 0 ;

     for(int i = 0 ; i<n  ; i++)
    {
        cin>>arr[i];
    }

    for(int i = 0 ; i<n ;)
    {
        if(arr[i] <= x && skips <= 1)
        {
            i++;
            qsnc++ ;

        }

        else if (arr[i]>x)
        {
            skips++ ; 
            if(skips > 1)
            {
                break ; 
            }
            else
            {
                i++ ;
            }   
        }

    }

    cout<<qsnc<<endl;

    return 0 ;

}