#include<bits/stdc++.h>
using namespace std; 

int main()
{
    struct Point
    {
        int x1 , y1 , x2 , y2 ,  c; 
    } ; 

    int n ; 
    cin>>n ;
    struct Point arr[n] ;
    int are[n] ; 

    for(int i = 0 ; i < n ; i ++)
    {
        cin>>arr[i].x1>>arr[i].y1>>arr[i].x2>>arr[i].y2>>arr[i].c ; 
    }

    for(int i = 0 ; i < n-1 ; i ++)
    {
       for(int j = i+1 ; j < n ; j++)
       {
          are[j-1] = ((min(arr[i].x2 ,arr[j].x2 ) - max(arr[i].x1 ,arr[j].x1))* - (min(arr[i].y2 ,arr[j].y2 ) - max(arr[i].y1 ,arr[j].y1))*arr[i].c) ;

       }
    }

      int sums = 0 ; 

    for(int p = 0 ; p< n ; p++)
    {
        sums+=are[p] ;
    }

    cout<<sums<<endl ; 


return  0 ;

}