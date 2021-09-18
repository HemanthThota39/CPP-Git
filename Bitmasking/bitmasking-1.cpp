#include <bits/stdc++.h>
using namespace std;

int main()
{
    int ans, len = 0;
    int answer_array[32] = {0};
    vector<int> qarr{1,1,1,2,2,2,3,3,3,5,5,5,6};
    int bitcnt = 32;
    for(int i=0; i<32; i++)
    {
        int mask = 1<<i;
        for(auto x:qarr)
        {
            if(x&mask) answer_array[i]+=1;
            else answer_array[i]+=0;
           
        }
    }
    for(auto x:answer_array)
    {

        x = x % 3;
        cout<<x<<" ";
        ans+= (x*pow(2, len));
        len++;
    }
    cout<<"\n"<<ans;
    return 0;

}