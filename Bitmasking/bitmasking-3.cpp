#include <bits/stdc++.h>
using namespace std;
int main()
{
    string mystring = "Hemanth";
    int n=mystring.length();
    for(int i=0; i<(1<<n); i++)
    {
        for(int j=0; j<n; j++)
        {
            if(i&(1<<j))
            {
                cout<<mystring[n-1-j];
            }
        }
        cout<<endl;
    }

    return 0;
}