#include <iostream>
#include <map>
#include <iterator>
using namespace std;
int main()
{

    map <string, int> mp;
    mp["chocolate"] = 20;
    mp["biscuit"] = 10;
    mp["kitkat"] = 40;
    for(auto it = mp.begin(); it!=mp.end(); ++it)
    {
        cout<<it->first<<"-->"<<it->second<<endl;
    }
    return 0;
}