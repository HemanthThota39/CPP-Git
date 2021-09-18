#include <bits/stdc++.h>
using namespace std;

int fastexponent(int base, int power)
{
    int ans=1;
   while(power)
   {
       if(power&1)
       {
           ans = ans*base;
       }
       power = power>>1;
       base = base*base;
   }
   return ans;
}

int main()
{
    cout<<fastexponent(2, 5);
    return 0;
}