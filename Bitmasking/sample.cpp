#include <bits/stdc++.h>
using namespace std;
int main()
{
#ifndef ONLINE_JUDGE
freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);

#endif
//code goes here
long t;
cin>>t;
while(t--)
{
    long Houses,Budget;
    cin>>Houses>>Budget;
    long* prices = new long(Houses);
    for(int i=0; i<Houses; i++)
    {
        cin>>prices[i];
    }
    sort(prices, prices+Houses);
    long moneySpent = 0;
    int j=0, count =0;
    while(moneySpent<Budget && j<Houses)
    { 
        
        moneySpent+=prices[j];
        j++;
        count++;
    }
    cout<<count-1<<endl;

}
 
return 0;
}