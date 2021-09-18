#include <iostream>
#include <vector>
#include <string>
#include <iterator>

using namespace std;

int main()
{
    vector <string> game;
    int number;
    cin>>number;
    for(int i=0; i<number; i++)
    {
        string word;
        cin>>word;
        game.push_back(word);
    }
    sort(game.begin(), game.end());
    for(auto it=game.begin(); it!=game.end(); it++)
    {
        if((*(it+1)).substr(0, (*it).size()).compare((*it)) == 0)
            swap(*it, *(it+1));
    }
    for(auto it=game.begin(); it!=game.end(); it++)
    {
        cout<<*it<<endl;
    }
    return 0;
}
