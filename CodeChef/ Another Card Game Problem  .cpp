// Another Card Game Problem 

#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int T ;
    cin>>T;
    while(T--)
    {
        int pc , pr ; 
        cin>>pc ; 
        cin>>pr; 
        
        int numc = pc - (pc%9) ;
        int numr = pr - (pr%9) ;

        int digc = (pc%9 == 0) ? (numc/9) :(numc/9)+1 ;

        int digr = (pr%9 == 0) ?(numr/9) : (numr/9)+1 ;

           

           if (digc < digr)
           {
             cout<<"0 "<<digc<<endl ; 
           }

           else if (digr < digc)
           {

            cout<<"1 "<<digr<<endl ; 

           }

           else if (digr == digc)
           {
            cout<<"1 "<<digr<<endl ; 

           }

           else
           {
            cout<<"ERROR"; 
           }

    }
    
    return 0;
}
