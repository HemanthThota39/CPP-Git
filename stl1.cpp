#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    //vector 

    vector<int> v1;
    for (int i=1; i<10; i++){
        v1.push_back(i);
    }
    cout<<"Elements in the vector are: "<<endl;
    for (auto i = v1.begin(); i!=v1.end(); i++){
        cout << *i <<" ";
    }
    cout<<"\nElements in reverse order of the vector are: "<<endl;
    for (auto i = v1.rbegin(); i!=v1.rend(); i++){
        cout << *i <<" ";
    }
    cout<<"\ncapacity of the vector is "<<v1.capacity()<<endl;
    cout<<"max size of the vector is "<<v1.max_size()<<endl; 
    cout<<"current size of the vector is "<<v1.size()<<endl;

    //sort 
    vector<int> vect{ 3,4,5,6,2,8,9 };
    sort(vect.begin(),vect.end());



    return 0;
}