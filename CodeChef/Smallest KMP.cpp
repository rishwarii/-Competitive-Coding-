// Smallest KMP 
#include <bits/stdc++.h>
using namespace std;
#define SIZE  26 ; 

int main() 
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int T;
    cin>>T;
    while(T--)
    {
        string S ;
        string P ;
        int np = P.size(); 
        int  ns = S.size(); 
        {
            
        }

        cin>>S;
        cin>>P; //smaller string

        //Value of P freq

        int freqP [SIZE] ; 
        memeset(freqp , 0  , sizeof(freqP)) ; 

        for(int i = 0 ; i < np ; i++ )
        {
            freqP[P[i]-'a']++;
        }

        //Value freq of S

        int freqS [SIZE] ; 
        string res = '';
        memeset(freqs , 0  , sizeof(freqS)) ; 

        bool flag = true ; 

        for(int i = 0 ; i < SIZE ; i++ )
        {
            freqP[S[i]-'a']++;
        }

        for(int i = 0 ; i< ; i++)
        {
            if(freqp[i] == freqs[i])
            {
                flag = true; 
                res+=P[i] ; 
                   
            }

            else
            {

            }
        }
    }
	return 0;
}
