#include <iostream>
#include <vector>
#include <string>
#include <iterator>
#include <map>
using namespace std;
int main()
{
    map<string, vector<string>> customers;
    map<string, int> bill;
    int number_of_customers;
    cin>>number_of_customers;
    for(int i=1; i<=number_of_customers; i++)
    {
        string cname;
        cin>>cname;
        int number_of_ordres;
        cin>>number_of_ordres;
        for(int i=1; i<=number_of_ordres; i++)
        {
            string item;
            cin>>item;
            customers[cname].push_back(item);
        }
    }

    bill["dosa"] = 20;
    bill["chapathi"] = 35;
    bill["puri"] = 30;
    bill["bonda"] = 30;

    //print the bill of each customer
    for(auto i:customers)
    {
        int price = 0;
        for(auto x:i.second)
            price = price + bill[x];
        cout<<"Bill of the customer "<<i.first<<" is: "<<price<<endl;
    }

}