#include <iostream>
#include <iterator>
#include <map>
#include <set>
using namespace std;

int main()
{
	//ordered maps
	
	map<string, int> mp;
	mp["Maggie"] = 30;
	mp["Almond"] = 20;
	mp["Rose Milk"] = 45;
	mp["Oreo"] = 60;
	mp["Banana"]  = 45;
	for(auto x:mp)
		cout<<x.first<<"-->>"<<x.second<<endl;
	return 0;
}