#include <iostream>
#include <map>


using namespace std;

int main()
{
    map<string, int> mp;
    mp["chocolate"] = 10;
    mp["biscuit"] = 20;
    mp.insert(pair<string, int> ("cake",30));
    mp.insert(pair<string, int>("puff", 25));
    auto it1 = mp.find("chocolate");
    mp.erase(it1);
    for (auto it=mp.begin(); it!=mp.end(); ++it)
    {
        cout<<it->first<<"-->>"<<it->second<<endl;

    }
    cout<<mp.empty()<<endl;
    
    cout<<mp.size()<<endl;
    
}