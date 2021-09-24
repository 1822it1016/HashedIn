#include <bits/stdc++.h>
using namespace std;
int min_coins(int coins[],int amount,int n)
{
    if(amount == 0)
    return 0;
    int mini=INT_MAX;
    

    for(int i=0;i<n;i++)
    {
        if(amount>=coins[i])
        {   
           int c1=min_coins(coins,amount-coins[i],n)+1;
            mini=min(c1,mini);
        }  
    }
    return mini;
}
int main() {
int coins[] = {25, 10, 5}, V = 30;
cout<<min_coins(coins,V,3);
}
