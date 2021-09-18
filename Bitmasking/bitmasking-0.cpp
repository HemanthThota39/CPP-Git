#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a,b;
    int arr[6] = {3,5,5,5,4,4};
    int mask, XOR;
    for(int i=0; i<6; i++)
    {
        XOR = XOR^arr[i];
    }
    mask = XOR & (~(XOR-1));
    for(int i=0; i<6; i++)
    {
        if(arr[i]&mask)
        {
            a = a^arr[i];
        }
        else{
            b = b^arr[i];
        }
    }
    if(a<b) swap(a,b);
    cout<<a<<" "<<b<<endl;

    return 0;
}