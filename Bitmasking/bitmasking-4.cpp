// Greatest AND from a given array

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int mask,result =0;
    int numbers[] = {4,8,12,16};
    for(int i=19; i>0; i--)
    {
        mask = result | (1<<i);
        int cnt = 0;
        for(int j=0; j<4; j++)
        {
            if((numbers[j]&mask) == mask) cnt++;
        }
        if(cnt>=2){
            result = mask;
        }
    }
    cout<<result;
    return result;
}