//Chef Wars - Return of the Jedi 

#include <bits/stdc++.h>
using namespace std;


// void pow(int health , int power , int &healthp , int &powerp)

// {
    
//     health -= power ;  
//     power -= power/2 ; 
//     healthp = health ; 
//     powerp = power ; 

//     cout << powerp<<"dem" << endl ; 
//     cout << healthp<<"dem" << endl ; 


    
// }

int main() {
    
    int T;
    cin>>T;
    
    while(T--)
    {
        
        int  health , power  ; 
       

        cin>>health;
        cin>>power;
        
        
        
        
        while(health >0 && power >0)
        {

            health -= power ; 
            float ph = power/2; 
            power=floor(ph);
            //power%2==0?power-=power/2:power-=(power-1)/2;
        }
        
       
        
                if(health <= 0)
            {
                cout <<"1" << endl ;
    
                
            }
            
            else if (power <= 0 )
            {
                cout << "0" << endl ;
    
            }
            
        
        
        
        else
        {
        
        
            cout << "-1" << endl ;

            
        }
        
    }
    
	
	return 0;
}
