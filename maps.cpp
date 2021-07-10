#include <iostream>
#include <map>
#include <iterator>

using namespace std;

int main()
{
    map<string, int> mp;
    mp["chocolate"] = 10;
    mp["biscuit"] = 20;
    mp.insert(pair<string, int> ("cake",30));
    for (auto it=mp.begin(); it!=mp.end(); ++it)
    {
        cout<<it->first<<"-->>"<<it->second<<endl;    
    }
}