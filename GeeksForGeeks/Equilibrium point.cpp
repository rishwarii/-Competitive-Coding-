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
        
        bool flag = false ;

        int leftsum = 0 ; 

        
         for(int i  = 0 ; i<n ; i++)
        {
            sum-=a[i] ; 
 
            if(sum == leftsum) 
            {
                cout<<i+1<<endl;
                flag = true;

            }
            
            leftsum+=a[i]; 

        }       

        if(flag == false)
        {
            cout<<"-1"<<endl ; 
        }

    }

    return 0;
    

}
    