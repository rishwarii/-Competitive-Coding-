#include<bits/stdc++.h>
using namespace std ; 
int main()
{
    int T ; 
    cin>>T;
    while(T--)
    {

        string s;
        cin>>s;
        int l  = s.length() ; 

        sort(s.begin(),s.end());
        bool flag = true ; 
        int i = 0


            //for(int i = 0 ;  i < l-1 ;)

            while(flag)
            {

                if(s[i+1]-s[i] == 1)
                {
                     i ++;
                }

                else
                {
                    flag = false ;

                }
                
            }

            flag == true ? cout<<"YES"<<endl:cout<<"NO"<<endl;

         

    }

    return 0 ;
}